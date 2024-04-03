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

class StopRecordingInternalRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.verbose = null;
    }
    else {
      if (initObj.hasOwnProperty('verbose')) {
        this.verbose = initObj.verbose
      }
      else {
        this.verbose = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type StopRecordingInternalRequest
    // Serialize message field [verbose]
    bufferOffset = _serializer.bool(obj.verbose, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type StopRecordingInternalRequest
    let len;
    let data = new StopRecordingInternalRequest(null);
    // Deserialize message field [verbose]
    data.verbose = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a service object
    return 'anymal_rsl_recording/StopRecordingInternalRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '3522d8a7fadc19be0545a762613821d2';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    bool verbose
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new StopRecordingInternalRequest(null);
    if (msg.verbose !== undefined) {
      resolved.verbose = msg.verbose;
    }
    else {
      resolved.verbose = false
    }

    return resolved;
    }
};

class StopRecordingInternalResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.suc = null;
      this.result = null;
      this.message = null;
    }
    else {
      if (initObj.hasOwnProperty('suc')) {
        this.suc = initObj.suc
      }
      else {
        this.suc = false;
      }
      if (initObj.hasOwnProperty('result')) {
        this.result = initObj.result
      }
      else {
        this.result = '';
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
    // Serializes a message object of type StopRecordingInternalResponse
    // Serialize message field [suc]
    bufferOffset = _serializer.bool(obj.suc, buffer, bufferOffset);
    // Serialize message field [result]
    bufferOffset = _serializer.string(obj.result, buffer, bufferOffset);
    // Serialize message field [message]
    bufferOffset = _serializer.string(obj.message, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type StopRecordingInternalResponse
    let len;
    let data = new StopRecordingInternalResponse(null);
    // Deserialize message field [suc]
    data.suc = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [result]
    data.result = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [message]
    data.message = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.result);
    length += _getByteLength(object.message);
    return length + 9;
  }

  static datatype() {
    // Returns string type for a service object
    return 'anymal_rsl_recording/StopRecordingInternalResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'eb82b3671ed25707fcf1ba78e1d2315b';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    bool suc
    string result
    string message
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new StopRecordingInternalResponse(null);
    if (msg.suc !== undefined) {
      resolved.suc = msg.suc;
    }
    else {
      resolved.suc = false
    }

    if (msg.result !== undefined) {
      resolved.result = msg.result;
    }
    else {
      resolved.result = ''
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
  Request: StopRecordingInternalRequest,
  Response: StopRecordingInternalResponse,
  md5sum() { return '32fb2cde53384a7b9732fe4867a515c5'; },
  datatype() { return 'anymal_rsl_recording/StopRecordingInternal'; }
};
