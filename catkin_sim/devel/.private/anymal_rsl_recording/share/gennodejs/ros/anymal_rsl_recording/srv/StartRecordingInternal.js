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

class StartRecordingInternalRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.topics = null;
      this.timestamp = null;
    }
    else {
      if (initObj.hasOwnProperty('topics')) {
        this.topics = initObj.topics
      }
      else {
        this.topics = '';
      }
      if (initObj.hasOwnProperty('timestamp')) {
        this.timestamp = initObj.timestamp
      }
      else {
        this.timestamp = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type StartRecordingInternalRequest
    // Serialize message field [topics]
    bufferOffset = _serializer.string(obj.topics, buffer, bufferOffset);
    // Serialize message field [timestamp]
    bufferOffset = _serializer.string(obj.timestamp, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type StartRecordingInternalRequest
    let len;
    let data = new StartRecordingInternalRequest(null);
    // Deserialize message field [topics]
    data.topics = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [timestamp]
    data.timestamp = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.topics);
    length += _getByteLength(object.timestamp);
    return length + 8;
  }

  static datatype() {
    // Returns string type for a service object
    return 'anymal_rsl_recording/StartRecordingInternalRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '6375c601750e77d58959cb8fac445f25';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string topics
    string timestamp
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new StartRecordingInternalRequest(null);
    if (msg.topics !== undefined) {
      resolved.topics = msg.topics;
    }
    else {
      resolved.topics = ''
    }

    if (msg.timestamp !== undefined) {
      resolved.timestamp = msg.timestamp;
    }
    else {
      resolved.timestamp = ''
    }

    return resolved;
    }
};

class StartRecordingInternalResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.suc = null;
      this.message = null;
    }
    else {
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
    // Serializes a message object of type StartRecordingInternalResponse
    // Serialize message field [suc]
    bufferOffset = _serializer.bool(obj.suc, buffer, bufferOffset);
    // Serialize message field [message]
    bufferOffset = _serializer.string(obj.message, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type StartRecordingInternalResponse
    let len;
    let data = new StartRecordingInternalResponse(null);
    // Deserialize message field [suc]
    data.suc = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [message]
    data.message = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.message);
    return length + 5;
  }

  static datatype() {
    // Returns string type for a service object
    return 'anymal_rsl_recording/StartRecordingInternalResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'b6126c73bcef51911f25484629552cec';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    bool suc
    string message
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new StartRecordingInternalResponse(null);
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
  Request: StartRecordingInternalRequest,
  Response: StartRecordingInternalResponse,
  md5sum() { return '31953adc5c144f572ee1dd85f7900ed7'; },
  datatype() { return 'anymal_rsl_recording/StartRecordingInternal'; }
};
