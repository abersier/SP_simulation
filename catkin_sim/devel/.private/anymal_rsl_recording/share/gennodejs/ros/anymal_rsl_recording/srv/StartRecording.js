// Auto-generated. Do not edit!

// (in-package anymal_rsl_recording.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------


//-----------------------------------------------------------

class StartRecordingRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.yaml_file = null;
    }
    else {
      if (initObj.hasOwnProperty('yaml_file')) {
        this.yaml_file = initObj.yaml_file
      }
      else {
        this.yaml_file = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type StartRecordingRequest
    // Serialize message field [yaml_file]
    bufferOffset = _serializer.string(obj.yaml_file, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type StartRecordingRequest
    let len;
    let data = new StartRecordingRequest(null);
    // Deserialize message field [yaml_file]
    data.yaml_file = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.yaml_file);
    return length + 4;
  }

  static datatype() {
    // Returns string type for a service object
    return 'anymal_rsl_recording/StartRecordingRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'f39929436acc1b6fe810c855cd8cc9ef';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string yaml_file
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new StartRecordingRequest(null);
    if (msg.yaml_file !== undefined) {
      resolved.yaml_file = msg.yaml_file;
    }
    else {
      resolved.yaml_file = ''
    }

    return resolved;
    }
};

class StartRecordingResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.timestamp = null;
      this.suc = null;
      this.message = null;
    }
    else {
      if (initObj.hasOwnProperty('timestamp')) {
        this.timestamp = initObj.timestamp
      }
      else {
        this.timestamp = '';
      }
      if (initObj.hasOwnProperty('suc')) {
        this.suc = initObj.suc
      }
      else {
        this.suc = false;
      }
      if (initObj.hasOwnProperty('message')) {
        this.message = initObj.message
      }
      else {
        this.message = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type StartRecordingResponse
    // Serialize message field [timestamp]
    bufferOffset = _serializer.string(obj.timestamp, buffer, bufferOffset);
    // Serialize message field [suc]
    bufferOffset = _serializer.bool(obj.suc, buffer, bufferOffset);
    // Serialize message field [message]
    bufferOffset = _serializer.string(obj.message, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type StartRecordingResponse
    let len;
    let data = new StartRecordingResponse(null);
    // Deserialize message field [timestamp]
    data.timestamp = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [suc]
    data.suc = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [message]
    data.message = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.timestamp);
    length += _getByteLength(object.message);
    return length + 9;
  }

  static datatype() {
    // Returns string type for a service object
    return 'anymal_rsl_recording/StartRecordingResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'b3c1649a8e42db27d21a60be319b4a96';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string timestamp
    bool suc
    string message
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new StartRecordingResponse(null);
    if (msg.timestamp !== undefined) {
      resolved.timestamp = msg.timestamp;
    }
    else {
      resolved.timestamp = ''
    }

    if (msg.suc !== undefined) {
      resolved.suc = msg.suc;
    }
    else {
      resolved.suc = false
    }

    if (msg.message !== undefined) {
      resolved.message = msg.message;
    }
    else {
      resolved.message = ''
    }

    return resolved;
    }
};

module.exports = {
  Request: StartRecordingRequest,
  Response: StartRecordingResponse,
  md5sum() { return '3301e16c408a17b56303a46aa82c7f9c'; },
  datatype() { return 'anymal_rsl_recording/StartRecording'; }
};
