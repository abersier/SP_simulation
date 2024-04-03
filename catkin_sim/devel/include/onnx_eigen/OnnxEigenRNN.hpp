#pragma once

#include <string>
#include <Eigen/Dense>
#include <onnxruntime/onnxruntime_cxx_api.h>
#include <stddef.h>
class OnnxEigenRNN {
public:
  OnnxEigenRNN();
  ~OnnxEigenRNN() = default;

  void load(std::string modelPath);
  void run(Eigen::Ref<Eigen::Matrix<float, -1, -1, Eigen::RowMajor>> input, Eigen::Ref<Eigen::Matrix<float, -1, -1, Eigen::RowMajor>> output);
  Eigen::MatrixXf getHidden();
  void reset();
  std::vector<int64_t> getInputDim();
  std::vector<int64_t> getOutputDim();
  std::vector<int64_t> getHiddenDim();

private:
  Ort::MemoryInfo memoryInfo_{nullptr};
  std::unique_ptr<Ort::Session> session_;
  std::vector<const char*> inputNamesVec_, outputNamesVec_;
  std::vector<Ort::Value> inputTensorsVec_,  outputTensorsVec_, hiddenTensorsVec_;
  std::vector<int64_t> inputDimsVec_, outputDimsVec_, hiddenDimsVec_;
  Eigen::Matrix<float, -1, -1, Eigen::RowMajor> hidden_;
  size_t inputCount_;
};
