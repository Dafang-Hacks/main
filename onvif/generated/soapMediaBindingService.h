/* soapMediaBindingService.h
   Generated by gSOAP 2.8.17r from /root/onvif/_onvif_srvd-1.1/generated/onvif.h

Copyright(C) 2000-2013, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#ifndef soapMediaBindingService_H
#define soapMediaBindingService_H
#include "soapH.h"
class SOAP_CMAC MediaBindingService
{ public:
	struct soap *soap;
	bool own;
	/// Constructor
	MediaBindingService();
	/// Constructor to use/share an engine state
	MediaBindingService(struct soap*);
	/// Constructor with engine input+output mode control
	MediaBindingService(soap_mode iomode);
	/// Constructor with engine input and output mode control
	MediaBindingService(soap_mode imode, soap_mode omode);
	/// Destructor, also frees all deserialized data
	virtual ~MediaBindingService();
	/// Delete all deserialized data (with soap_destroy and soap_end)
	virtual	void destroy();
	/// Delete all deserialized data and reset to defaults
	virtual	void reset();
	/// Initializer used by constructor
	virtual	void MediaBindingService_init(soap_mode imode, soap_mode omode);
	/// Create a copy
	virtual	MediaBindingService *copy() SOAP_PURE_VIRTUAL;
	/// Close connection (normally automatic)
	virtual	int soap_close_socket();
	/// Force close connection (can kill a thread blocked on IO)
	virtual	int soap_force_close_socket();
	/// Return sender-related fault to sender
	virtual	int soap_senderfault(const char *string, const char *detailXML);
	/// Return sender-related fault with SOAP 1.2 subcode to sender
	virtual	int soap_senderfault(const char *subcodeQName, const char *string, const char *detailXML);
	/// Return receiver-related fault to sender
	virtual	int soap_receiverfault(const char *string, const char *detailXML);
	/// Return receiver-related fault with SOAP 1.2 subcode to sender
	virtual	int soap_receiverfault(const char *subcodeQName, const char *string, const char *detailXML);
	/// Print fault
	virtual	void soap_print_fault(FILE*);
#ifndef WITH_LEAN
	/// Print fault to stream
#ifndef WITH_COMPAT
	virtual	void soap_stream_fault(std::ostream&);
#endif
	/// Put fault into buffer
	virtual	char *soap_sprint_fault(char *buf, size_t len);
#endif
	/// Disables and removes SOAP Header from message
	virtual	void soap_noheader();
	/// Put SOAP Header in message
	virtual	void soap_header(char *wsa__MessageID, struct wsa__Relationship *wsa__RelatesTo, struct wsa__EndpointReferenceType *wsa__From, struct wsa__EndpointReferenceType *wsa__ReplyTo, struct wsa__EndpointReferenceType *wsa__FaultTo, char *wsa__To, char *wsa__Action, struct wsdd__AppSequenceType *wsdd__AppSequence, char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance);
	/// Get SOAP Header structure (NULL when absent)
	virtual	const SOAP_ENV__Header *soap_header();
	/// Run simple single-thread iterative service on port until a connection error occurs (returns error code or SOAP_OK), use this->bind_flag = SO_REUSEADDR to rebind for a rerun
	virtual	int run(int port);
	/// Bind service to port (returns master socket or SOAP_INVALID_SOCKET)
	virtual	SOAP_SOCKET bind(const char *host, int port, int backlog);
	/// Accept next request (returns socket or SOAP_INVALID_SOCKET)
	virtual	SOAP_SOCKET accept();
#if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
	/// Then accept SSL handshake, when SSL is used
	virtual	int ssl_accept();
#endif
	/// Serve this request (returns error code or SOAP_OK)
	virtual	int serve();
	/// Used by serve() to dispatch a request (returns error code or SOAP_OK)
	virtual	int dispatch();

	///
	/// Service operations (you should define these):
	/// Note: compile with -DWITH_PURE_VIRTUAL for pure virtual methods
	///

	/// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
	virtual	int GetServiceCapabilities(_trt__GetServiceCapabilities *trt__GetServiceCapabilities, _trt__GetServiceCapabilitiesResponse *trt__GetServiceCapabilitiesResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetVideoSources' (returns error code or SOAP_OK)
	virtual	int GetVideoSources(_trt__GetVideoSources *trt__GetVideoSources, _trt__GetVideoSourcesResponse *trt__GetVideoSourcesResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetAudioSources' (returns error code or SOAP_OK)
	virtual	int GetAudioSources(_trt__GetAudioSources *trt__GetAudioSources, _trt__GetAudioSourcesResponse *trt__GetAudioSourcesResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetAudioOutputs' (returns error code or SOAP_OK)
	virtual	int GetAudioOutputs(_trt__GetAudioOutputs *trt__GetAudioOutputs, _trt__GetAudioOutputsResponse *trt__GetAudioOutputsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'CreateProfile' (returns error code or SOAP_OK)
	virtual	int CreateProfile(_trt__CreateProfile *trt__CreateProfile, _trt__CreateProfileResponse *trt__CreateProfileResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetProfile' (returns error code or SOAP_OK)
	virtual	int GetProfile(_trt__GetProfile *trt__GetProfile, _trt__GetProfileResponse *trt__GetProfileResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetProfiles' (returns error code or SOAP_OK)
	virtual	int GetProfiles(_trt__GetProfiles *trt__GetProfiles, _trt__GetProfilesResponse *trt__GetProfilesResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'AddVideoEncoderConfiguration' (returns error code or SOAP_OK)
	virtual	int AddVideoEncoderConfiguration(_trt__AddVideoEncoderConfiguration *trt__AddVideoEncoderConfiguration, _trt__AddVideoEncoderConfigurationResponse *trt__AddVideoEncoderConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'AddVideoSourceConfiguration' (returns error code or SOAP_OK)
	virtual	int AddVideoSourceConfiguration(_trt__AddVideoSourceConfiguration *trt__AddVideoSourceConfiguration, _trt__AddVideoSourceConfigurationResponse *trt__AddVideoSourceConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'AddAudioEncoderConfiguration' (returns error code or SOAP_OK)
	virtual	int AddAudioEncoderConfiguration(_trt__AddAudioEncoderConfiguration *trt__AddAudioEncoderConfiguration, _trt__AddAudioEncoderConfigurationResponse *trt__AddAudioEncoderConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'AddAudioSourceConfiguration' (returns error code or SOAP_OK)
	virtual	int AddAudioSourceConfiguration(_trt__AddAudioSourceConfiguration *trt__AddAudioSourceConfiguration, _trt__AddAudioSourceConfigurationResponse *trt__AddAudioSourceConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'AddPTZConfiguration' (returns error code or SOAP_OK)
	virtual	int AddPTZConfiguration(_trt__AddPTZConfiguration *trt__AddPTZConfiguration, _trt__AddPTZConfigurationResponse *trt__AddPTZConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'AddVideoAnalyticsConfiguration' (returns error code or SOAP_OK)
	virtual	int AddVideoAnalyticsConfiguration(_trt__AddVideoAnalyticsConfiguration *trt__AddVideoAnalyticsConfiguration, _trt__AddVideoAnalyticsConfigurationResponse *trt__AddVideoAnalyticsConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'AddMetadataConfiguration' (returns error code or SOAP_OK)
	virtual	int AddMetadataConfiguration(_trt__AddMetadataConfiguration *trt__AddMetadataConfiguration, _trt__AddMetadataConfigurationResponse *trt__AddMetadataConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'AddAudioOutputConfiguration' (returns error code or SOAP_OK)
	virtual	int AddAudioOutputConfiguration(_trt__AddAudioOutputConfiguration *trt__AddAudioOutputConfiguration, _trt__AddAudioOutputConfigurationResponse *trt__AddAudioOutputConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'AddAudioDecoderConfiguration' (returns error code or SOAP_OK)
	virtual	int AddAudioDecoderConfiguration(_trt__AddAudioDecoderConfiguration *trt__AddAudioDecoderConfiguration, _trt__AddAudioDecoderConfigurationResponse *trt__AddAudioDecoderConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'RemoveVideoEncoderConfiguration' (returns error code or SOAP_OK)
	virtual	int RemoveVideoEncoderConfiguration(_trt__RemoveVideoEncoderConfiguration *trt__RemoveVideoEncoderConfiguration, _trt__RemoveVideoEncoderConfigurationResponse *trt__RemoveVideoEncoderConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'RemoveVideoSourceConfiguration' (returns error code or SOAP_OK)
	virtual	int RemoveVideoSourceConfiguration(_trt__RemoveVideoSourceConfiguration *trt__RemoveVideoSourceConfiguration, _trt__RemoveVideoSourceConfigurationResponse *trt__RemoveVideoSourceConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'RemoveAudioEncoderConfiguration' (returns error code or SOAP_OK)
	virtual	int RemoveAudioEncoderConfiguration(_trt__RemoveAudioEncoderConfiguration *trt__RemoveAudioEncoderConfiguration, _trt__RemoveAudioEncoderConfigurationResponse *trt__RemoveAudioEncoderConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'RemoveAudioSourceConfiguration' (returns error code or SOAP_OK)
	virtual	int RemoveAudioSourceConfiguration(_trt__RemoveAudioSourceConfiguration *trt__RemoveAudioSourceConfiguration, _trt__RemoveAudioSourceConfigurationResponse *trt__RemoveAudioSourceConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'RemovePTZConfiguration' (returns error code or SOAP_OK)
	virtual	int RemovePTZConfiguration(_trt__RemovePTZConfiguration *trt__RemovePTZConfiguration, _trt__RemovePTZConfigurationResponse *trt__RemovePTZConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'RemoveVideoAnalyticsConfiguration' (returns error code or SOAP_OK)
	virtual	int RemoveVideoAnalyticsConfiguration(_trt__RemoveVideoAnalyticsConfiguration *trt__RemoveVideoAnalyticsConfiguration, _trt__RemoveVideoAnalyticsConfigurationResponse *trt__RemoveVideoAnalyticsConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'RemoveMetadataConfiguration' (returns error code or SOAP_OK)
	virtual	int RemoveMetadataConfiguration(_trt__RemoveMetadataConfiguration *trt__RemoveMetadataConfiguration, _trt__RemoveMetadataConfigurationResponse *trt__RemoveMetadataConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'RemoveAudioOutputConfiguration' (returns error code or SOAP_OK)
	virtual	int RemoveAudioOutputConfiguration(_trt__RemoveAudioOutputConfiguration *trt__RemoveAudioOutputConfiguration, _trt__RemoveAudioOutputConfigurationResponse *trt__RemoveAudioOutputConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'RemoveAudioDecoderConfiguration' (returns error code or SOAP_OK)
	virtual	int RemoveAudioDecoderConfiguration(_trt__RemoveAudioDecoderConfiguration *trt__RemoveAudioDecoderConfiguration, _trt__RemoveAudioDecoderConfigurationResponse *trt__RemoveAudioDecoderConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'DeleteProfile' (returns error code or SOAP_OK)
	virtual	int DeleteProfile(_trt__DeleteProfile *trt__DeleteProfile, _trt__DeleteProfileResponse *trt__DeleteProfileResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetVideoSourceConfigurations' (returns error code or SOAP_OK)
	virtual	int GetVideoSourceConfigurations(_trt__GetVideoSourceConfigurations *trt__GetVideoSourceConfigurations, _trt__GetVideoSourceConfigurationsResponse *trt__GetVideoSourceConfigurationsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetVideoEncoderConfigurations' (returns error code or SOAP_OK)
	virtual	int GetVideoEncoderConfigurations(_trt__GetVideoEncoderConfigurations *trt__GetVideoEncoderConfigurations, _trt__GetVideoEncoderConfigurationsResponse *trt__GetVideoEncoderConfigurationsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetAudioSourceConfigurations' (returns error code or SOAP_OK)
	virtual	int GetAudioSourceConfigurations(_trt__GetAudioSourceConfigurations *trt__GetAudioSourceConfigurations, _trt__GetAudioSourceConfigurationsResponse *trt__GetAudioSourceConfigurationsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetAudioEncoderConfigurations' (returns error code or SOAP_OK)
	virtual	int GetAudioEncoderConfigurations(_trt__GetAudioEncoderConfigurations *trt__GetAudioEncoderConfigurations, _trt__GetAudioEncoderConfigurationsResponse *trt__GetAudioEncoderConfigurationsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetVideoAnalyticsConfigurations' (returns error code or SOAP_OK)
	virtual	int GetVideoAnalyticsConfigurations(_trt__GetVideoAnalyticsConfigurations *trt__GetVideoAnalyticsConfigurations, _trt__GetVideoAnalyticsConfigurationsResponse *trt__GetVideoAnalyticsConfigurationsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetMetadataConfigurations' (returns error code or SOAP_OK)
	virtual	int GetMetadataConfigurations(_trt__GetMetadataConfigurations *trt__GetMetadataConfigurations, _trt__GetMetadataConfigurationsResponse *trt__GetMetadataConfigurationsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetAudioOutputConfigurations' (returns error code or SOAP_OK)
	virtual	int GetAudioOutputConfigurations(_trt__GetAudioOutputConfigurations *trt__GetAudioOutputConfigurations, _trt__GetAudioOutputConfigurationsResponse *trt__GetAudioOutputConfigurationsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetAudioDecoderConfigurations' (returns error code or SOAP_OK)
	virtual	int GetAudioDecoderConfigurations(_trt__GetAudioDecoderConfigurations *trt__GetAudioDecoderConfigurations, _trt__GetAudioDecoderConfigurationsResponse *trt__GetAudioDecoderConfigurationsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetVideoSourceConfiguration' (returns error code or SOAP_OK)
	virtual	int GetVideoSourceConfiguration(_trt__GetVideoSourceConfiguration *trt__GetVideoSourceConfiguration, _trt__GetVideoSourceConfigurationResponse *trt__GetVideoSourceConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetVideoEncoderConfiguration' (returns error code or SOAP_OK)
	virtual	int GetVideoEncoderConfiguration(_trt__GetVideoEncoderConfiguration *trt__GetVideoEncoderConfiguration, _trt__GetVideoEncoderConfigurationResponse *trt__GetVideoEncoderConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetAudioSourceConfiguration' (returns error code or SOAP_OK)
	virtual	int GetAudioSourceConfiguration(_trt__GetAudioSourceConfiguration *trt__GetAudioSourceConfiguration, _trt__GetAudioSourceConfigurationResponse *trt__GetAudioSourceConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetAudioEncoderConfiguration' (returns error code or SOAP_OK)
	virtual	int GetAudioEncoderConfiguration(_trt__GetAudioEncoderConfiguration *trt__GetAudioEncoderConfiguration, _trt__GetAudioEncoderConfigurationResponse *trt__GetAudioEncoderConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetVideoAnalyticsConfiguration' (returns error code or SOAP_OK)
	virtual	int GetVideoAnalyticsConfiguration(_trt__GetVideoAnalyticsConfiguration *trt__GetVideoAnalyticsConfiguration, _trt__GetVideoAnalyticsConfigurationResponse *trt__GetVideoAnalyticsConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetMetadataConfiguration' (returns error code or SOAP_OK)
	virtual	int GetMetadataConfiguration(_trt__GetMetadataConfiguration *trt__GetMetadataConfiguration, _trt__GetMetadataConfigurationResponse *trt__GetMetadataConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetAudioOutputConfiguration' (returns error code or SOAP_OK)
	virtual	int GetAudioOutputConfiguration(_trt__GetAudioOutputConfiguration *trt__GetAudioOutputConfiguration, _trt__GetAudioOutputConfigurationResponse *trt__GetAudioOutputConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetAudioDecoderConfiguration' (returns error code or SOAP_OK)
	virtual	int GetAudioDecoderConfiguration(_trt__GetAudioDecoderConfiguration *trt__GetAudioDecoderConfiguration, _trt__GetAudioDecoderConfigurationResponse *trt__GetAudioDecoderConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetCompatibleVideoEncoderConfigurations' (returns error code or SOAP_OK)
	virtual	int GetCompatibleVideoEncoderConfigurations(_trt__GetCompatibleVideoEncoderConfigurations *trt__GetCompatibleVideoEncoderConfigurations, _trt__GetCompatibleVideoEncoderConfigurationsResponse *trt__GetCompatibleVideoEncoderConfigurationsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetCompatibleVideoSourceConfigurations' (returns error code or SOAP_OK)
	virtual	int GetCompatibleVideoSourceConfigurations(_trt__GetCompatibleVideoSourceConfigurations *trt__GetCompatibleVideoSourceConfigurations, _trt__GetCompatibleVideoSourceConfigurationsResponse *trt__GetCompatibleVideoSourceConfigurationsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetCompatibleAudioEncoderConfigurations' (returns error code or SOAP_OK)
	virtual	int GetCompatibleAudioEncoderConfigurations(_trt__GetCompatibleAudioEncoderConfigurations *trt__GetCompatibleAudioEncoderConfigurations, _trt__GetCompatibleAudioEncoderConfigurationsResponse *trt__GetCompatibleAudioEncoderConfigurationsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetCompatibleAudioSourceConfigurations' (returns error code or SOAP_OK)
	virtual	int GetCompatibleAudioSourceConfigurations(_trt__GetCompatibleAudioSourceConfigurations *trt__GetCompatibleAudioSourceConfigurations, _trt__GetCompatibleAudioSourceConfigurationsResponse *trt__GetCompatibleAudioSourceConfigurationsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetCompatibleVideoAnalyticsConfigurations' (returns error code or SOAP_OK)
	virtual	int GetCompatibleVideoAnalyticsConfigurations(_trt__GetCompatibleVideoAnalyticsConfigurations *trt__GetCompatibleVideoAnalyticsConfigurations, _trt__GetCompatibleVideoAnalyticsConfigurationsResponse *trt__GetCompatibleVideoAnalyticsConfigurationsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetCompatibleMetadataConfigurations' (returns error code or SOAP_OK)
	virtual	int GetCompatibleMetadataConfigurations(_trt__GetCompatibleMetadataConfigurations *trt__GetCompatibleMetadataConfigurations, _trt__GetCompatibleMetadataConfigurationsResponse *trt__GetCompatibleMetadataConfigurationsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetCompatibleAudioOutputConfigurations' (returns error code or SOAP_OK)
	virtual	int GetCompatibleAudioOutputConfigurations(_trt__GetCompatibleAudioOutputConfigurations *trt__GetCompatibleAudioOutputConfigurations, _trt__GetCompatibleAudioOutputConfigurationsResponse *trt__GetCompatibleAudioOutputConfigurationsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetCompatibleAudioDecoderConfigurations' (returns error code or SOAP_OK)
	virtual	int GetCompatibleAudioDecoderConfigurations(_trt__GetCompatibleAudioDecoderConfigurations *trt__GetCompatibleAudioDecoderConfigurations, _trt__GetCompatibleAudioDecoderConfigurationsResponse *trt__GetCompatibleAudioDecoderConfigurationsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetVideoSourceConfiguration' (returns error code or SOAP_OK)
	virtual	int SetVideoSourceConfiguration(_trt__SetVideoSourceConfiguration *trt__SetVideoSourceConfiguration, _trt__SetVideoSourceConfigurationResponse *trt__SetVideoSourceConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetVideoEncoderConfiguration' (returns error code or SOAP_OK)
	virtual	int SetVideoEncoderConfiguration(_trt__SetVideoEncoderConfiguration *trt__SetVideoEncoderConfiguration, _trt__SetVideoEncoderConfigurationResponse *trt__SetVideoEncoderConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetAudioSourceConfiguration' (returns error code or SOAP_OK)
	virtual	int SetAudioSourceConfiguration(_trt__SetAudioSourceConfiguration *trt__SetAudioSourceConfiguration, _trt__SetAudioSourceConfigurationResponse *trt__SetAudioSourceConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetAudioEncoderConfiguration' (returns error code or SOAP_OK)
	virtual	int SetAudioEncoderConfiguration(_trt__SetAudioEncoderConfiguration *trt__SetAudioEncoderConfiguration, _trt__SetAudioEncoderConfigurationResponse *trt__SetAudioEncoderConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetVideoAnalyticsConfiguration' (returns error code or SOAP_OK)
	virtual	int SetVideoAnalyticsConfiguration(_trt__SetVideoAnalyticsConfiguration *trt__SetVideoAnalyticsConfiguration, _trt__SetVideoAnalyticsConfigurationResponse *trt__SetVideoAnalyticsConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetMetadataConfiguration' (returns error code or SOAP_OK)
	virtual	int SetMetadataConfiguration(_trt__SetMetadataConfiguration *trt__SetMetadataConfiguration, _trt__SetMetadataConfigurationResponse *trt__SetMetadataConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetAudioOutputConfiguration' (returns error code or SOAP_OK)
	virtual	int SetAudioOutputConfiguration(_trt__SetAudioOutputConfiguration *trt__SetAudioOutputConfiguration, _trt__SetAudioOutputConfigurationResponse *trt__SetAudioOutputConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetAudioDecoderConfiguration' (returns error code or SOAP_OK)
	virtual	int SetAudioDecoderConfiguration(_trt__SetAudioDecoderConfiguration *trt__SetAudioDecoderConfiguration, _trt__SetAudioDecoderConfigurationResponse *trt__SetAudioDecoderConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetVideoSourceConfigurationOptions' (returns error code or SOAP_OK)
	virtual	int GetVideoSourceConfigurationOptions(_trt__GetVideoSourceConfigurationOptions *trt__GetVideoSourceConfigurationOptions, _trt__GetVideoSourceConfigurationOptionsResponse *trt__GetVideoSourceConfigurationOptionsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetVideoEncoderConfigurationOptions' (returns error code or SOAP_OK)
	virtual	int GetVideoEncoderConfigurationOptions(_trt__GetVideoEncoderConfigurationOptions *trt__GetVideoEncoderConfigurationOptions, _trt__GetVideoEncoderConfigurationOptionsResponse *trt__GetVideoEncoderConfigurationOptionsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetAudioSourceConfigurationOptions' (returns error code or SOAP_OK)
	virtual	int GetAudioSourceConfigurationOptions(_trt__GetAudioSourceConfigurationOptions *trt__GetAudioSourceConfigurationOptions, _trt__GetAudioSourceConfigurationOptionsResponse *trt__GetAudioSourceConfigurationOptionsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetAudioEncoderConfigurationOptions' (returns error code or SOAP_OK)
	virtual	int GetAudioEncoderConfigurationOptions(_trt__GetAudioEncoderConfigurationOptions *trt__GetAudioEncoderConfigurationOptions, _trt__GetAudioEncoderConfigurationOptionsResponse *trt__GetAudioEncoderConfigurationOptionsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetMetadataConfigurationOptions' (returns error code or SOAP_OK)
	virtual	int GetMetadataConfigurationOptions(_trt__GetMetadataConfigurationOptions *trt__GetMetadataConfigurationOptions, _trt__GetMetadataConfigurationOptionsResponse *trt__GetMetadataConfigurationOptionsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetAudioOutputConfigurationOptions' (returns error code or SOAP_OK)
	virtual	int GetAudioOutputConfigurationOptions(_trt__GetAudioOutputConfigurationOptions *trt__GetAudioOutputConfigurationOptions, _trt__GetAudioOutputConfigurationOptionsResponse *trt__GetAudioOutputConfigurationOptionsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetAudioDecoderConfigurationOptions' (returns error code or SOAP_OK)
	virtual	int GetAudioDecoderConfigurationOptions(_trt__GetAudioDecoderConfigurationOptions *trt__GetAudioDecoderConfigurationOptions, _trt__GetAudioDecoderConfigurationOptionsResponse *trt__GetAudioDecoderConfigurationOptionsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetGuaranteedNumberOfVideoEncoderInstances' (returns error code or SOAP_OK)
	virtual	int GetGuaranteedNumberOfVideoEncoderInstances(_trt__GetGuaranteedNumberOfVideoEncoderInstances *trt__GetGuaranteedNumberOfVideoEncoderInstances, _trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse *trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetStreamUri' (returns error code or SOAP_OK)
	virtual	int GetStreamUri(_trt__GetStreamUri *trt__GetStreamUri, _trt__GetStreamUriResponse *trt__GetStreamUriResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'StartMulticastStreaming' (returns error code or SOAP_OK)
	virtual	int StartMulticastStreaming(_trt__StartMulticastStreaming *trt__StartMulticastStreaming, _trt__StartMulticastStreamingResponse *trt__StartMulticastStreamingResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'StopMulticastStreaming' (returns error code or SOAP_OK)
	virtual	int StopMulticastStreaming(_trt__StopMulticastStreaming *trt__StopMulticastStreaming, _trt__StopMulticastStreamingResponse *trt__StopMulticastStreamingResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetSynchronizationPoint' (returns error code or SOAP_OK)
	virtual	int SetSynchronizationPoint(_trt__SetSynchronizationPoint *trt__SetSynchronizationPoint, _trt__SetSynchronizationPointResponse *trt__SetSynchronizationPointResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetSnapshotUri' (returns error code or SOAP_OK)
	virtual	int GetSnapshotUri(_trt__GetSnapshotUri *trt__GetSnapshotUri, _trt__GetSnapshotUriResponse *trt__GetSnapshotUriResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetVideoSourceModes' (returns error code or SOAP_OK)
	virtual	int GetVideoSourceModes(_trt__GetVideoSourceModes *trt__GetVideoSourceModes, _trt__GetVideoSourceModesResponse *trt__GetVideoSourceModesResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetVideoSourceMode' (returns error code or SOAP_OK)
	virtual	int SetVideoSourceMode(_trt__SetVideoSourceMode *trt__SetVideoSourceMode, _trt__SetVideoSourceModeResponse *trt__SetVideoSourceModeResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetOSDs' (returns error code or SOAP_OK)
	virtual	int GetOSDs(_trt__GetOSDs *trt__GetOSDs, _trt__GetOSDsResponse *trt__GetOSDsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetOSD' (returns error code or SOAP_OK)
	virtual	int GetOSD(_trt__GetOSD *trt__GetOSD, _trt__GetOSDResponse *trt__GetOSDResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetOSDOptions' (returns error code or SOAP_OK)
	virtual	int GetOSDOptions(_trt__GetOSDOptions *trt__GetOSDOptions, _trt__GetOSDOptionsResponse *trt__GetOSDOptionsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetOSD' (returns error code or SOAP_OK)
	virtual	int SetOSD(_trt__SetOSD *trt__SetOSD, _trt__SetOSDResponse *trt__SetOSDResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'CreateOSD' (returns error code or SOAP_OK)
	virtual	int CreateOSD(_trt__CreateOSD *trt__CreateOSD, _trt__CreateOSDResponse *trt__CreateOSDResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'DeleteOSD' (returns error code or SOAP_OK)
	virtual	int DeleteOSD(_trt__DeleteOSD *trt__DeleteOSD, _trt__DeleteOSDResponse *trt__DeleteOSDResponse) SOAP_PURE_VIRTUAL;
};
#endif
