#pragma once

#include <string>
#include <Eigen/Dense>
#include <onnxruntime/onnxruntime_cxx_api.h>
#include <stddef.h>
class OnnxEigen {
public:
  OnnxEigen();
  ~OnnxEigen() = default;

  void load(std::string modelPath);
  // void run(Eigen::Ref<Eigen::Matrix<float, -1, -1, Eigen::RowMajor>> input, Eigen::Ref<Eigen::VectorXf> output);
  void run(Eigen::Ref<Eigen::Matrix<float, -1, -1, Eigen::RowMajor>> input, Eigen::Ref<Eigen::Matrix<float, -1, -1, Eigen::RowMajor>> output);

  std::vector<int64_t> getInputDim();
  std::vector<int64_t> getOutputDim();

private:
  Ort::MemoryInfo memoryInfo_{nullptr};
  std::unique_ptr<Ort::Session> session_;
  std::vector<const char*> inputNamesVec_, outputNamesVec_;
  std::vector<Ort::Value> inputTensorsVec_,  outputTensorsVec_;
  std::vector<int64_t> inputDimsVec_, outputDimsVec_;
};
