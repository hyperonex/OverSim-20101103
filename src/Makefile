#
# OMNeT++/OMNEST Makefile for OverSim-20101103
#
# This file was generated with the command:
#  opp_makemake -f --deep -O out -I../../INET-OverSim-20101019/src/networklayer/ipv6 -I../../INET-OverSim-20101019/src/linklayer/mfcore -I../../INET-OverSim-20101019/src/networklayer/arp -I../../INET-OverSim-20101019/src/transport/tcp/queues -I../../INET-OverSim-20101019/src/linklayer/contract -I../../INET-OverSim-20101019/src/httptools/messages -I../../INET-OverSim-20101019/src/networklayer/ted -I../../INET-OverSim-20101019/src/transport/udp -I../../INET-OverSim-20101019/src/networklayer/mpls -I../../INET-OverSim-20101019/src/networklayer/ipv4 -I../../omnet-extension-master/src/sim -I../../INET-OverSim-20101019/src/networklayer/icmpv6 -I../../INET-OverSim-20101019/src/networklayer/ldp -I../../INET-OverSim-20101019/src/networklayer/rsvp_te -I../../omnet-extension-master/src/common -I../../INET-OverSim-20101019/src/applications/pingapp -I../../INET-OverSim-20101019/src/transport/contract -I../../INET-OverSim-20101019/src/applications/udpapp -I../../omnet-extension-master/src/xmlio -I../../INET-OverSim-20101019/src/transport/sctp -I../../INET-OverSim-20101019/src/httptools/base -I../../INET-OverSim-20101019/src/base -I../../INET-OverSim-20101019/src/transport/observer -I../../INET-OverSim-20101019/src/networklayer/contract -I../../omnet-extension-master/src/xmlio/cs240utils/include -I../../INET-OverSim-20101019/src/httptools/messages/observer -I../../INET-OverSim-20101019/src/world -I../../INET-OverSim-20101019/src/transport/tcp -I../../INET-OverSim-20101019/src/util/headerserializers -I../../INET-OverSim-20101019/src/util -I../../omnet-extension-master/include -I../../INET-OverSim-20101019/src/networklayer/common -I../../INET-OverSim-20101019/src/networklayer/autorouting -L/usr/lib -L../../omnet-extension-master/out/$(CONFIGNAME) -L../../INET-OverSim-20101019/out/$(CONFIGNAME)/src -lomnetpp41extension -linet -KOMNET_EXTENSION_MASTER_PROJ=../../omnet-extension-master -KINET_OVERSIM_20101019_PROJ=../../INET-OverSim-20101019 -- -lgmp
#

# Name of target to be created (-o option)
TARGET = OverSim-20101103$(EXE_SUFFIX)

# User interface (uncomment one) (-u option)
USERIF_LIBS = $(ALL_ENV_LIBS) # that is, $(TKENV_LIBS) $(CMDENV_LIBS)
#USERIF_LIBS = $(CMDENV_LIBS)
#USERIF_LIBS = $(TKENV_LIBS)

# C++ include paths (with -I)
INCLUDE_PATH = \
    -I../../INET-OverSim-20101019/src/networklayer/ipv6 \
    -I../../INET-OverSim-20101019/src/linklayer/mfcore \
    -I../../INET-OverSim-20101019/src/networklayer/arp \
    -I../../INET-OverSim-20101019/src/transport/tcp/queues \
    -I../../INET-OverSim-20101019/src/linklayer/contract \
    -I../../INET-OverSim-20101019/src/httptools/messages \
    -I../../INET-OverSim-20101019/src/networklayer/ted \
    -I../../INET-OverSim-20101019/src/transport/udp \
    -I../../INET-OverSim-20101019/src/networklayer/mpls \
    -I../../INET-OverSim-20101019/src/networklayer/ipv4 \
    -I../../omnet-extension-master/src/sim \
    -I../../INET-OverSim-20101019/src/networklayer/icmpv6 \
    -I../../INET-OverSim-20101019/src/networklayer/ldp \
    -I../../INET-OverSim-20101019/src/networklayer/rsvp_te \
    -I../../omnet-extension-master/src/common \
    -I../../INET-OverSim-20101019/src/applications/pingapp \
    -I../../INET-OverSim-20101019/src/transport/contract \
    -I../../INET-OverSim-20101019/src/applications/udpapp \
    -I../../omnet-extension-master/src/xmlio \
    -I../../INET-OverSim-20101019/src/transport/sctp \
    -I../../INET-OverSim-20101019/src/httptools/base \
    -I../../INET-OverSim-20101019/src/base \
    -I../../INET-OverSim-20101019/src/transport/observer \
    -I../../INET-OverSim-20101019/src/networklayer/contract \
    -I../../omnet-extension-master/src/xmlio/cs240utils/include \
    -I../../INET-OverSim-20101019/src/httptools/messages/observer \
    -I../../INET-OverSim-20101019/src/world \
    -I../../INET-OverSim-20101019/src/transport/tcp \
    -I../../INET-OverSim-20101019/src/util/headerserializers \
    -I../../INET-OverSim-20101019/src/util \
    -I../../omnet-extension-master/include \
    -I../../INET-OverSim-20101019/src/networklayer/common \
    -I../../INET-OverSim-20101019/src/networklayer/autorouting \
    -I. \
    -Iapplications \
    -Iapplications/almtest \
    -Iapplications/dht \
    -Iapplications/giasearchapp \
    -Iapplications/i3 \
    -Iapplications/i3/i3Apps \
    -Iapplications/kbrtestapp \
    -Iapplications/myapplication \
    -Iapplications/realworldtestapp \
    -Iapplications/scribe \
    -Iapplications/simplegameclient \
    -Iapplications/tcpexampleapp \
    -Iapplications/tierdummy \
    -Icommon \
    -Icommon/cbr \
    -Ioverlay \
    -Ioverlay/bamboo \
    -Ioverlay/broose \
    -Ioverlay/chord \
    -Ioverlay/gia \
    -Ioverlay/kademlia \
    -Ioverlay/koorde \
    -Ioverlay/myoverlay \
    -Ioverlay/nice \
    -Ioverlay/ntree \
    -Ioverlay/pastry \
    -Ioverlay/pubsubmmog \
    -Ioverlay/quon \
    -Ioverlay/vast \
    -Itier2 \
    -Itier2/dhttestapp \
    -Itier2/p2pns \
    -Itier2/simmud \
    -Itier3 \
    -Itier3/xmlrpcinterface \
    -Itier3/xmlrpcinterface/xmlrpc++ \
    -Iunderlay \
    -Iunderlay/inetunderlay \
    -Iunderlay/inetunderlay/ipv6 \
    -Iunderlay/reaseunderlay \
    -Iunderlay/reaseunderlay/topologies \
    -Iunderlay/reaseunderlay/topologies/topology_example \
    -Iunderlay/reaseunderlay/topologies/topology_tiny_oversim \
    -Iunderlay/simpleunderlay \
    -Iunderlay/singlehostunderlay \
    -Iunderlay/singlehostunderlay/stun

# Additional object and library files to link with
EXTRA_OBJS = -lgmp

# Additional libraries (-L, -l options)
LIBS = -L/usr/lib -L../../omnet-extension-master/out/$(CONFIGNAME) -L../../INET-OverSim-20101019/out/$(CONFIGNAME)/src  -lomnetpp41extension -linet
LIBS += -Wl,-rpath,`abspath /usr/lib` -Wl,-rpath,`abspath ../../omnet-extension-master/out/$(CONFIGNAME)` -Wl,-rpath,`abspath ../../INET-OverSim-20101019/out/$(CONFIGNAME)/src`

# Output directory
PROJECT_OUTPUT_DIR = ../out
PROJECTRELATIVE_PATH = src
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc and .msg files
OBJS = \
    $O/applications/almtest/ALMTest.o \
    $O/applications/almtest/MessageObserver.o \
    $O/applications/dht/DHT.o \
    $O/applications/dht/DHTDataStorage.o \
    $O/applications/giasearchapp/SearchMsgBookkeeping.o \
    $O/applications/giasearchapp/GIASearchApp.o \
    $O/applications/i3/I3Trigger.o \
    $O/applications/i3/I3BaseApp.o \
    $O/applications/i3/I3IPAddress.o \
    $O/applications/i3/I3SubIdentifier.o \
    $O/applications/i3/I3Identifier.o \
    $O/applications/i3/TriggerTable.o \
    $O/applications/i3/OverlayDummy.o \
    $O/applications/i3/I3IdentifierStack.o \
    $O/applications/i3/I3.o \
    $O/applications/i3/I3Message.o \
    $O/applications/i3/i3Apps/I3TriggerRoutingTime.o \
    $O/applications/i3/i3Apps/I3Triggers.o \
    $O/applications/i3/i3Apps/I3Composite.o \
    $O/applications/i3/i3Apps/I3HostMobility.o \
    $O/applications/i3/i3Apps/I3LatencyStretch.o \
    $O/applications/i3/i3Apps/I3Session.o \
    $O/applications/i3/i3Apps/I3Anycast.o \
    $O/applications/i3/i3Apps/I3Multicast.o \
    $O/applications/kbrtestapp/KBRTestApp.o \
    $O/applications/myapplication/MyApplication.o \
    $O/applications/realworldtestapp/RealWorldTestPacketParser.o \
    $O/applications/realworldtestapp/RealWorldTestApp.o \
    $O/applications/scribe/ScribeGroup.o \
    $O/applications/scribe/Scribe.o \
    $O/applications/simplegameclient/hotspotRoaming.o \
    $O/applications/simplegameclient/groupRoaming.o \
    $O/applications/simplegameclient/traverseRoaming.o \
    $O/applications/simplegameclient/randomRoaming.o \
    $O/applications/simplegameclient/SimpleGameClient.o \
    $O/applications/simplegameclient/greatGathering.o \
    $O/applications/simplegameclient/realWorldRoaming.o \
    $O/applications/simplegameclient/MovementGenerator.o \
    $O/applications/simplegameclient/GlobalCoordinator.o \
    $O/applications/simplegameclient/ConnectivityProbeApp.o \
    $O/applications/simplegameclient/BoundingBox2D.o \
    $O/applications/tcpexampleapp/TCPExampleApp.o \
    $O/applications/tierdummy/TierDummy.o \
    $O/common/BinaryValue.o \
    $O/common/BaseTcpSupport.o \
    $O/common/NoChurn.o \
    $O/common/NodeVector.o \
    $O/common/GlobalNodeList.o \
    $O/common/GenericPacketParser.o \
    $O/common/RpcListener.o \
    $O/common/CryptoModule.o \
    $O/common/PeerInfo.o \
    $O/common/NodeHandle.o \
    $O/common/Vivaldi.o \
    $O/common/TransportAddress.o \
    $O/common/NeighborCache.o \
    $O/common/SVivaldi.o \
    $O/common/TopologyVis.o \
    $O/common/ParetoChurn.o \
    $O/common/GlobalParameters.o \
    $O/common/CoordinateSystem.o \
    $O/common/SimpleNcs.o \
    $O/common/OverlayKey.o \
    $O/common/SHA1.o \
    $O/common/ChurnGenerator.o \
    $O/common/LifetimeChurn.o \
    $O/common/TraceChurn.o \
    $O/common/ProxNodeHandle.o \
    $O/common/ExtTCPSocketMap.o \
    $O/common/RecursiveLookup.o \
    $O/common/OverSimMessage.o \
    $O/common/GlobalTraceManager.o \
    $O/common/BootstrapList.o \
    $O/common/FinisherModule.o \
    $O/common/GlobalStatistics.o \
    $O/common/IterativeLookup.o \
    $O/common/BitTorrentChurn.o \
    $O/common/PeerStorage.o \
    $O/common/BaseOverlay.o \
    $O/common/Vector2D.o \
    $O/common/BaseRpc.o \
    $O/common/BaseApp.o \
    $O/common/RandomChurn.o \
    $O/common/UnderlayConfigurator.o \
    $O/common/Nps.o \
    $O/common/cnetcommbuffer.o \
    $O/common/cbr/CBR-DHT.o \
    $O/common/cbr/Landmark.o \
    $O/common/cbr/simplex.o \
    $O/common/cbr/CoordBasedRouting.o \
    $O/common/cbr/yang.o \
    $O/overlay/bamboo/Bamboo.o \
    $O/overlay/broose/BrooseHandle.o \
    $O/overlay/broose/BrooseBucket.o \
    $O/overlay/broose/Broose.o \
    $O/overlay/chord/ChordSuccessorList.o \
    $O/overlay/chord/ChordFingerTable.o \
    $O/overlay/chord/Chord.o \
    $O/overlay/gia/GiaMessageBookkeeping.o \
    $O/overlay/gia/GiaNode.o \
    $O/overlay/gia/GiaKeyListModule.o \
    $O/overlay/gia/GiaTokenFactory.o \
    $O/overlay/gia/GiaKeyList.o \
    $O/overlay/gia/GiaNeighbors.o \
    $O/overlay/gia/GiaNeighborCandidateList.o \
    $O/overlay/gia/Gia.o \
    $O/overlay/kademlia/Kademlia.o \
    $O/overlay/kademlia/KademliaNodeHandle.o \
    $O/overlay/kademlia/KademliaBucket.o \
    $O/overlay/koorde/Koorde.o \
    $O/overlay/myoverlay/MyOverlay.o \
    $O/overlay/nice/NicePeerInfo.o \
    $O/overlay/nice/NiceCluster.o \
    $O/overlay/nice/Nice.o \
    $O/overlay/ntree/NTree.o \
    $O/overlay/ntree/NTreeHelper.o \
    $O/overlay/pastry/PastryNeighborhoodSet.o \
    $O/overlay/pastry/BasePastry.o \
    $O/overlay/pastry/PastryStateObject.o \
    $O/overlay/pastry/Pastry.o \
    $O/overlay/pastry/PastryLeafSet.o \
    $O/overlay/pastry/PastryRoutingTable.o \
    $O/overlay/pubsubmmog/PubSubLobby.o \
    $O/overlay/pubsubmmog/PubSubSubspaceId.o \
    $O/overlay/pubsubmmog/PubSubMMOG.o \
    $O/overlay/pubsubmmog/PubSubSubspace.o \
    $O/overlay/quon/Quon.o \
    $O/overlay/quon/QuonHelper.o \
    $O/overlay/quon/ConnectivityProbeQuon.o \
    $O/overlay/vast/VastDefs.o \
    $O/overlay/vast/ConnectivityProbe.o \
    $O/overlay/vast/Vast.o \
    $O/tier2/dhttestapp/DHTTestApp.o \
    $O/tier2/dhttestapp/GlobalDhtTestMap.o \
    $O/tier2/p2pns/P2pns.o \
    $O/tier2/p2pns/P2pnsCache.o \
    $O/tier2/simmud/SimMud.o \
    $O/tier3/xmlrpcinterface/XmlRpcInterface.o \
    $O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcSource.o \
    $O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcUtil.o \
    $O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcThreadedServer.o \
    $O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcValue.o \
    $O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcServerConnection.o \
    $O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcMutex.o \
    $O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcDispatch.o \
    $O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcSocket.o \
    $O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcThread.o \
    $O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcServerMethod.o \
    $O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcServer.o \
    $O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcClient.o \
    $O/underlay/inetunderlay/InetInfo.o \
    $O/underlay/inetunderlay/InetUnderlayConfigurator.o \
    $O/underlay/inetunderlay/AccessNet.o \
    $O/underlay/reaseunderlay/ConnectReaSE.o \
    $O/underlay/reaseunderlay/RUNetworkConfigurator.o \
    $O/underlay/reaseunderlay/ReaSEUnderlayConfigurator.o \
    $O/underlay/reaseunderlay/ReaSEInfo.o \
    $O/underlay/simpleunderlay/SimpleInfo.o \
    $O/underlay/simpleunderlay/SimpleNodeEntry.o \
    $O/underlay/simpleunderlay/SimpleTCP.o \
    $O/underlay/simpleunderlay/SimpleUDP.o \
    $O/underlay/simpleunderlay/SimpleUnderlayConfigurator.o \
    $O/underlay/singlehostunderlay/realtimescheduler.o \
    $O/underlay/singlehostunderlay/RealworldDevice.o \
    $O/underlay/singlehostunderlay/RealworldApp.o \
    $O/underlay/singlehostunderlay/udpoutscheduler.o \
    $O/underlay/singlehostunderlay/apptunoutscheduler.o \
    $O/underlay/singlehostunderlay/SingleHostUnderlayConfigurator.o \
    $O/underlay/singlehostunderlay/ZeroconfConnector.o \
    $O/underlay/singlehostunderlay/RealworldConnector.o \
    $O/underlay/singlehostunderlay/TunOutDevice.o \
    $O/underlay/singlehostunderlay/UdpOutDevice.o \
    $O/underlay/singlehostunderlay/tunoutscheduler.o \
    $O/underlay/singlehostunderlay/stun/udp.o \
    $O/underlay/singlehostunderlay/stun/stun.o \
    $O/applications/almtest/ALMTestTracedMessage_m.o \
    $O/applications/dht/DHTMessage_m.o \
    $O/applications/i3/I3Message_m.o \
    $O/applications/i3/i3Apps/I3TriggersMessage_m.o \
    $O/applications/i3/i3Apps/I3SessionMessage_m.o \
    $O/applications/kbrtestapp/KBRTestMessage_m.o \
    $O/applications/myapplication/MyMessage_m.o \
    $O/applications/realworldtestapp/RealWorldTestMessage_m.o \
    $O/applications/scribe/ScribeMessage_m.o \
    $O/applications/simplegameclient/SimpleGameClient_m.o \
    $O/applications/tcpexampleapp/TCPExampleMessage_m.o \
    $O/common/ExtAPIMessages_m.o \
    $O/common/OverSimMessage_m.o \
    $O/common/Nps_m.o \
    $O/common/CommonMessages_m.o \
    $O/common/GlobalTraceManager_m.o \
    $O/common/Churn_m.o \
    $O/common/cbr/CoordMessages_m.o \
    $O/common/cbr/CBR-DHTMessage_m.o \
    $O/overlay/broose/BrooseMessage_m.o \
    $O/overlay/chord/ChordMessage_m.o \
    $O/overlay/gia/GiaMessage_m.o \
    $O/overlay/kademlia/KademliaMessage_m.o \
    $O/overlay/myoverlay/MyOverlay_m.o \
    $O/overlay/nice/NiceMessage_m.o \
    $O/overlay/ntree/NTree_m.o \
    $O/overlay/pastry/PastryMessage_m.o \
    $O/overlay/pubsubmmog/PubSubMessage_m.o \
    $O/overlay/quon/Quon_m.o \
    $O/overlay/vast/Vast_m.o \
    $O/tier2/dhttestapp/DHTTestAppMessages_m.o \
    $O/tier2/p2pns/P2pnsMessage_m.o \
    $O/tier2/simmud/SimMud_m.o

# Message files
MSGFILES = \
    applications/almtest/ALMTestTracedMessage.msg \
    applications/dht/DHTMessage.msg \
    applications/i3/I3Message.msg \
    applications/i3/i3Apps/I3TriggersMessage.msg \
    applications/i3/i3Apps/I3SessionMessage.msg \
    applications/kbrtestapp/KBRTestMessage.msg \
    applications/myapplication/MyMessage.msg \
    applications/realworldtestapp/RealWorldTestMessage.msg \
    applications/scribe/ScribeMessage.msg \
    applications/simplegameclient/SimpleGameClient.msg \
    applications/tcpexampleapp/TCPExampleMessage.msg \
    common/ExtAPIMessages.msg \
    common/OverSimMessage.msg \
    common/Nps.msg \
    common/CommonMessages.msg \
    common/GlobalTraceManager.msg \
    common/Churn.msg \
    common/cbr/CoordMessages.msg \
    common/cbr/CBR-DHTMessage.msg \
    overlay/broose/BrooseMessage.msg \
    overlay/chord/ChordMessage.msg \
    overlay/gia/GiaMessage.msg \
    overlay/kademlia/KademliaMessage.msg \
    overlay/myoverlay/MyOverlay.msg \
    overlay/nice/NiceMessage.msg \
    overlay/ntree/NTree.msg \
    overlay/pastry/PastryMessage.msg \
    overlay/pubsubmmog/PubSubMessage.msg \
    overlay/quon/Quon.msg \
    overlay/vast/Vast.msg \
    tier2/dhttestapp/DHTTestAppMessages.msg \
    tier2/p2pns/P2pnsMessage.msg \
    tier2/simmud/SimMud.msg

# Other makefile variables (-K)
OMNET_EXTENSION_MASTER_PROJ=../../omnet-extension-master
INET_OVERSIM_20101019_PROJ=../../INET-OverSim-20101019

#------------------------------------------------------------------------------

# Pull in OMNeT++ configuration (Makefile.inc or configuser.vc)

ifneq ("$(OMNETPP_CONFIGFILE)","")
CONFIGFILE = $(OMNETPP_CONFIGFILE)
else
ifneq ("$(OMNETPP_ROOT)","")
CONFIGFILE = $(OMNETPP_ROOT)/Makefile.inc
else
CONFIGFILE = $(shell opp_configfilepath)
endif
endif

ifeq ("$(wildcard $(CONFIGFILE))","")
$(error Config file '$(CONFIGFILE)' does not exist -- add the OMNeT++ bin directory to the path so that opp_configfilepath can be found, or set the OMNETPP_CONFIGFILE variable to point to Makefile.inc)
endif

include $(CONFIGFILE)

# Simulation kernel and user interface libraries
OMNETPP_LIB_SUBDIR = $(OMNETPP_LIB_DIR)/$(TOOLCHAIN_NAME)
OMNETPP_LIBS = -L"$(OMNETPP_LIB_SUBDIR)" -L"$(OMNETPP_LIB_DIR)" $(USERIF_LIBS) $(KERNEL_LIBS) $(SYS_LIBS)

COPTS = $(CFLAGS)  $(INCLUDE_PATH) -I$(OMNETPP_INCL_DIR)
MSGCOPTS = $(INCLUDE_PATH)

#------------------------------------------------------------------------------
# User-supplied makefile fragment(s)
# >>>
# inserted from file 'makefrag':
INCLUDE_PATH += -I$(OMNETPP_ROOT)/src/sim/parsim -I/sw/include
LIBS += -L/sw/lib

# <<<
#------------------------------------------------------------------------------

# Main target
all: $(TARGET)

$(TARGET) : $O/$(TARGET)
	$(LN) $O/$(TARGET) .

$O/$(TARGET): $(OBJS)  $(wildcard $(EXTRA_OBJS)) Makefile
	@$(MKPATH) $O
	$(CXX) $(LDFLAGS) -o $O/$(TARGET)  $(OBJS) $(EXTRA_OBJS) $(WHOLE_ARCHIVE_ON) $(LIBS) $(WHOLE_ARCHIVE_OFF) $(OMNETPP_LIBS)

.PHONY:

.SUFFIXES: .cc

$O/%.o: %.cc
	@$(MKPATH) $(dir $@)
	$(CXX) -c $(COPTS) -o $@ $<

%_m.cc %_m.h: %.msg
	$(MSGC) -s _m.cc $(MSGCOPTS) $?

msgheaders: $(MSGFILES:.msg=_m.h)

clean:
	-rm -rf $O
	-rm -f OverSim-20101103 OverSim-20101103.exe libOverSim-20101103.so libOverSim-20101103.a libOverSim-20101103.dll libOverSim-20101103.dylib
	-rm -f ./*_m.cc ./*_m.h
	-rm -f applications/*_m.cc applications/*_m.h
	-rm -f applications/almtest/*_m.cc applications/almtest/*_m.h
	-rm -f applications/dht/*_m.cc applications/dht/*_m.h
	-rm -f applications/giasearchapp/*_m.cc applications/giasearchapp/*_m.h
	-rm -f applications/i3/*_m.cc applications/i3/*_m.h
	-rm -f applications/i3/i3Apps/*_m.cc applications/i3/i3Apps/*_m.h
	-rm -f applications/kbrtestapp/*_m.cc applications/kbrtestapp/*_m.h
	-rm -f applications/myapplication/*_m.cc applications/myapplication/*_m.h
	-rm -f applications/realworldtestapp/*_m.cc applications/realworldtestapp/*_m.h
	-rm -f applications/scribe/*_m.cc applications/scribe/*_m.h
	-rm -f applications/simplegameclient/*_m.cc applications/simplegameclient/*_m.h
	-rm -f applications/tcpexampleapp/*_m.cc applications/tcpexampleapp/*_m.h
	-rm -f applications/tierdummy/*_m.cc applications/tierdummy/*_m.h
	-rm -f common/*_m.cc common/*_m.h
	-rm -f common/cbr/*_m.cc common/cbr/*_m.h
	-rm -f overlay/*_m.cc overlay/*_m.h
	-rm -f overlay/bamboo/*_m.cc overlay/bamboo/*_m.h
	-rm -f overlay/broose/*_m.cc overlay/broose/*_m.h
	-rm -f overlay/chord/*_m.cc overlay/chord/*_m.h
	-rm -f overlay/gia/*_m.cc overlay/gia/*_m.h
	-rm -f overlay/kademlia/*_m.cc overlay/kademlia/*_m.h
	-rm -f overlay/koorde/*_m.cc overlay/koorde/*_m.h
	-rm -f overlay/myoverlay/*_m.cc overlay/myoverlay/*_m.h
	-rm -f overlay/nice/*_m.cc overlay/nice/*_m.h
	-rm -f overlay/ntree/*_m.cc overlay/ntree/*_m.h
	-rm -f overlay/pastry/*_m.cc overlay/pastry/*_m.h
	-rm -f overlay/pubsubmmog/*_m.cc overlay/pubsubmmog/*_m.h
	-rm -f overlay/quon/*_m.cc overlay/quon/*_m.h
	-rm -f overlay/vast/*_m.cc overlay/vast/*_m.h
	-rm -f tier2/*_m.cc tier2/*_m.h
	-rm -f tier2/dhttestapp/*_m.cc tier2/dhttestapp/*_m.h
	-rm -f tier2/p2pns/*_m.cc tier2/p2pns/*_m.h
	-rm -f tier2/simmud/*_m.cc tier2/simmud/*_m.h
	-rm -f tier3/*_m.cc tier3/*_m.h
	-rm -f tier3/xmlrpcinterface/*_m.cc tier3/xmlrpcinterface/*_m.h
	-rm -f tier3/xmlrpcinterface/xmlrpc++/*_m.cc tier3/xmlrpcinterface/xmlrpc++/*_m.h
	-rm -f underlay/*_m.cc underlay/*_m.h
	-rm -f underlay/inetunderlay/*_m.cc underlay/inetunderlay/*_m.h
	-rm -f underlay/inetunderlay/ipv6/*_m.cc underlay/inetunderlay/ipv6/*_m.h
	-rm -f underlay/reaseunderlay/*_m.cc underlay/reaseunderlay/*_m.h
	-rm -f underlay/reaseunderlay/topologies/*_m.cc underlay/reaseunderlay/topologies/*_m.h
	-rm -f underlay/reaseunderlay/topologies/topology_example/*_m.cc underlay/reaseunderlay/topologies/topology_example/*_m.h
	-rm -f underlay/reaseunderlay/topologies/topology_tiny_oversim/*_m.cc underlay/reaseunderlay/topologies/topology_tiny_oversim/*_m.h
	-rm -f underlay/simpleunderlay/*_m.cc underlay/simpleunderlay/*_m.h
	-rm -f underlay/singlehostunderlay/*_m.cc underlay/singlehostunderlay/*_m.h
	-rm -f underlay/singlehostunderlay/stun/*_m.cc underlay/singlehostunderlay/stun/*_m.h

cleanall: clean
	-rm -rf $(PROJECT_OUTPUT_DIR)

depend:
	$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc applications/*.cc applications/almtest/*.cc applications/dht/*.cc applications/giasearchapp/*.cc applications/i3/*.cc applications/i3/i3Apps/*.cc applications/kbrtestapp/*.cc applications/myapplication/*.cc applications/realworldtestapp/*.cc applications/scribe/*.cc applications/simplegameclient/*.cc applications/tcpexampleapp/*.cc applications/tierdummy/*.cc common/*.cc common/cbr/*.cc overlay/*.cc overlay/bamboo/*.cc overlay/broose/*.cc overlay/chord/*.cc overlay/gia/*.cc overlay/kademlia/*.cc overlay/koorde/*.cc overlay/myoverlay/*.cc overlay/nice/*.cc overlay/ntree/*.cc overlay/pastry/*.cc overlay/pubsubmmog/*.cc overlay/quon/*.cc overlay/vast/*.cc tier2/*.cc tier2/dhttestapp/*.cc tier2/p2pns/*.cc tier2/simmud/*.cc tier3/*.cc tier3/xmlrpcinterface/*.cc tier3/xmlrpcinterface/xmlrpc++/*.cc underlay/*.cc underlay/inetunderlay/*.cc underlay/inetunderlay/ipv6/*.cc underlay/reaseunderlay/*.cc underlay/reaseunderlay/topologies/*.cc underlay/reaseunderlay/topologies/topology_example/*.cc underlay/reaseunderlay/topologies/topology_tiny_oversim/*.cc underlay/simpleunderlay/*.cc underlay/singlehostunderlay/*.cc underlay/singlehostunderlay/stun/*.cc

# DO NOT DELETE THIS LINE -- make depend depends on it.
$O/applications/almtest/ALMTestTracedMessage_m.o: applications/almtest/ALMTestTracedMessage_m.cc \
	applications/almtest/ALMTestTracedMessage_m.h \
	common/OverlayKey.h
$O/applications/almtest/MessageObserver.o: applications/almtest/MessageObserver.cc \
	applications/almtest/ALMTestTracedMessage_m.h \
	common/OverlayKey.h \
	common/GlobalStatisticsAccess.h \
	applications/almtest/MessageObserver.h \
	common/GlobalStatistics.h
$O/applications/almtest/ALMTest.o: applications/almtest/ALMTest.cc \
	common/BinaryValue.h \
	common/BaseOverlay.h \
	common/ExtTCPSocketMap.h \
	common/Vector2D.h \
	common/ProxNodeHandle.h \
	common/BaseApp.h \
	common/IterativeLookupConfiguration.h \
	common/RecursiveLookup.h \
	applications/almtest/MessageObserver.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	common/AbstractLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	common/RpcState.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	common/NodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/InitStages.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	common/OverSimMessage_m.h \
	common/NodeVector.h \
	common/RpcListener.h \
	applications/almtest/ALMTestTracedMessage_m.h \
	common/BaseRpc.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/Comparator.h \
	applications/almtest/ALMTest.h
$O/applications/dht/DHT.o: applications/dht/DHT.cc \
	common/BaseOverlay.h \
	common/BinaryValue.h \
	common/ExtTCPSocketMap.h \
	common/Vector2D.h \
	common/ProxNodeHandle.h \
	common/IterativeLookupConfiguration.h \
	common/BaseApp.h \
	common/RecursiveLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseTcpSupport.h \
	applications/dht/DHT.h \
	common/TopologyVis.h \
	common/AbstractLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	applications/dht/DHTMessage_m.h \
	common/RpcState.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	common/NodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	applications/dht/DHTDataStorage.h \
	common/InitStages.h \
	common/CommonMessages_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	common/OverSimMessage.h \
	common/GlobalStatistics.h \
	common/OverSimMessage_m.h \
	common/RpcListener.h \
	common/NodeVector.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/BaseRpc.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/SHA1.h \
	common/Comparator.h
$O/applications/dht/DHTDataStorage.o: applications/dht/DHTDataStorage.cc \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	applications/dht/DHTDataStorage.h \
	common/ProxNodeHandle.h \
	common/InitStages.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/OverSimMessage_m.h \
	common/NodeVector.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/hashWatch.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/Comparator.h \
	common/NodeHandle.h
$O/applications/dht/DHTMessage_m.o: applications/dht/DHTMessage_m.cc \
	common/BinaryValue.h \
	common/OverlayKey.h \
	common/Vector2D.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/OverSimMessage_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	applications/dht/DHTMessage_m.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/applications/giasearchapp/GIASearchApp.o: applications/giasearchapp/GIASearchApp.cc \
	common/BinaryValue.h \
	common/BaseOverlay.h \
	common/ExtTCPSocketMap.h \
	common/Vector2D.h \
	common/ProxNodeHandle.h \
	overlay/gia/GiaMessage_m.h \
	common/ExtAPIMessages_m.h \
	common/HashFunc.h \
	common/IterativeLookupConfiguration.h \
	common/BaseApp.h \
	common/RecursiveLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	overlay/gia/GiaNode.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	common/AbstractLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	applications/giasearchapp/GIASearchApp.h \
	applications/giasearchapp/SearchMsgBookkeeping.h \
	common/RpcState.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	common/NodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/InitStages.h \
	common/oversim_byteswap.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	common/OverSimMessage.h \
	common/GlobalStatistics.h \
	common/OverSimMessage_m.h \
	common/UnderlayConfigurator.h \
	common/RpcListener.h \
	common/NodeVector.h \
	common/GlobalNodeList.h \
	common/ChurnGenerator.h \
	common/PeerStorage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/BaseRpc.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/PeerInfo.h \
	common/Comparator.h
$O/applications/giasearchapp/SearchMsgBookkeeping.o: applications/giasearchapp/SearchMsgBookkeeping.cc \
	common/OverlayKey.h \
	applications/giasearchapp/SearchMsgBookkeeping.h
$O/applications/i3/OverlayDummy.o: applications/i3/OverlayDummy.cc \
	common/BinaryValue.h \
	common/BaseOverlay.h \
	common/ExtTCPSocketMap.h \
	common/Vector2D.h \
	common/ProxNodeHandle.h \
	common/IterativeLookupConfiguration.h \
	common/RecursiveLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	common/AbstractLookup.h \
	common/RpcState.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	common/NodeHandle.h \
	common/OverlayKey.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/oversim_mapset.h \
	common/InitStages.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	common/OverSimMessage_m.h \
	common/RpcListener.h \
	common/NodeVector.h \
	common/BaseRpc.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/Comparator.h
$O/applications/i3/I3SubIdentifier.o: applications/i3/I3SubIdentifier.cc \
	common/OverlayKey.h \
	applications/i3/I3IPAddress.h \
	common/oversim_mapset.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	applications/i3/I3SubIdentifier.h \
	applications/i3/I3Identifier.h
$O/applications/i3/I3IPAddress.o: applications/i3/I3IPAddress.cc \
	applications/i3/I3IPAddress.h \
	common/oversim_mapset.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h
$O/applications/i3/I3Message.o: applications/i3/I3Message.cc \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	applications/i3/I3Message_m.h \
	applications/i3/I3IPAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	applications/i3/I3Message.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	applications/i3/I3Trigger.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	applications/i3/I3IdentifierStack.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	applications/i3/I3SubIdentifier.h \
	applications/i3/I3Identifier.h
$O/applications/i3/TriggerTable.o: applications/i3/TriggerTable.cc \
	common/BaseOverlay.h \
	common/BinaryValue.h \
	common/ExtTCPSocketMap.h \
	common/Vector2D.h \
	common/ProxNodeHandle.h \
	applications/i3/I3.h \
	common/BaseApp.h \
	common/IterativeLookupConfiguration.h \
	common/RecursiveLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	applications/i3/I3Message_m.h \
	applications/i3/TriggerTable.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	applications/i3/I3Message.h \
	common/AbstractLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	applications/i3/I3Trigger.h \
	applications/i3/I3IdentifierStack.h \
	common/RpcState.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	applications/i3/I3Identifier.h \
	common/NodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/InitStages.h \
	common/CommonMessages_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	common/OverSimMessage.h \
	common/OverSimMessage_m.h \
	common/NodeVector.h \
	common/RpcListener.h \
	applications/i3/I3IPAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/BaseRpc.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/Comparator.h \
	applications/i3/I3SubIdentifier.h
$O/applications/i3/I3Trigger.o: applications/i3/I3Trigger.cc \
	common/OverlayKey.h \
	applications/i3/I3IPAddress.h \
	common/oversim_mapset.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	applications/i3/I3Trigger.h \
	common/TransportAddress.h \
	applications/i3/I3IdentifierStack.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	applications/i3/I3SubIdentifier.h \
	applications/i3/I3Identifier.h
$O/applications/i3/I3Message_m.o: applications/i3/I3Message_m.cc \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	applications/i3/I3Message_m.h \
	applications/i3/I3IPAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	applications/i3/I3Trigger.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	applications/i3/I3IdentifierStack.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	applications/i3/I3SubIdentifier.h \
	applications/i3/I3Identifier.h
$O/applications/i3/I3BaseApp.o: applications/i3/I3BaseApp.cc \
	common/Vector2D.h \
	common/ProxNodeHandle.h \
	common/BaseApp.h \
	common/RecursiveLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	common/BootstrapNodeHandle.h \
	applications/i3/I3Trigger.h \
	applications/i3/I3IdentifierStack.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/applications/udpapp/UDPAppBase.h \
	common/RpcMacros.h \
	applications/i3/I3Identifier.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	common/UnderlayConfigurator.h \
	common/RpcListener.h \
	common/ChurnGenerator.h \
	common/BootstrapList.h \
	common/GlobalNodeListAccess.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/UDPControlInfo_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/Comparator.h \
	common/BaseOverlay.h \
	common/BinaryValue.h \
	common/ExtTCPSocketMap.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/NotifierConsts.h \
	common/HashFunc.h \
	common/IterativeLookupConfiguration.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/NotificationBoard.h \
	applications/i3/I3Message_m.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	applications/i3/I3Message.h \
	common/AbstractLookup.h \
	common/RpcState.h \
	common/NodeHandle.h \
	common/OverlayKey.h \
	common/InitStages.h \
	common/oversim_byteswap.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	common/OverSimMessage_m.h \
	common/NodeVector.h \
	common/GlobalNodeList.h \
	common/PeerStorage.h \
	applications/i3/I3IPAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/BaseRpc.h \
	common/TransportAddress.h \
	common/PeerInfo.h \
	applications/i3/I3BaseApp.h \
	applications/i3/I3SubIdentifier.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/ModuleAccess.h
$O/applications/i3/I3IdentifierStack.o: applications/i3/I3IdentifierStack.cc \
	applications/i3/I3IPAddress.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	applications/i3/I3IdentifierStack.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	applications/i3/I3SubIdentifier.h \
	applications/i3/I3Identifier.h
$O/applications/i3/I3Identifier.o: applications/i3/I3Identifier.cc \
	common/OverlayKey.h \
	common/SHA1.h \
	applications/i3/I3Identifier.h
$O/applications/i3/I3.o: applications/i3/I3.cc \
	common/Vector2D.h \
	common/ProxNodeHandle.h \
	applications/i3/I3.h \
	common/BaseApp.h \
	common/RecursiveLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/UDPSocket.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	applications/i3/I3Trigger.h \
	applications/i3/I3IdentifierStack.h \
	$(INET_OVERSIM_20101019_PROJ)/src/applications/udpapp/UDPAppBase.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	applications/i3/I3Identifier.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	common/UnderlayConfigurator.h \
	common/ChurnGenerator.h \
	common/RpcListener.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/UDPControlInfo_m.h \
	common/GlobalNodeListAccess.h \
	common/UnderlayConfiguratorAccess.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/Comparator.h \
	common/BinaryValue.h \
	common/BaseOverlay.h \
	common/ExtTCPSocketMap.h \
	common/HashFunc.h \
	common/IterativeLookupConfiguration.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	applications/i3/I3Message_m.h \
	applications/i3/TriggerTable.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	applications/i3/I3Message.h \
	common/AbstractLookup.h \
	common/RpcState.h \
	common/NodeHandle.h \
	common/OverlayKey.h \
	common/InitStages.h \
	common/oversim_byteswap.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	common/OverSimMessage_m.h \
	common/GlobalNodeList.h \
	common/NodeVector.h \
	common/PeerStorage.h \
	applications/i3/I3IPAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/BaseRpc.h \
	common/TransportAddress.h \
	common/SHA1.h \
	common/PeerInfo.h \
	applications/i3/I3SubIdentifier.h
$O/applications/i3/i3Apps/I3TriggerRoutingTime.o: applications/i3/i3Apps/I3TriggerRoutingTime.cc \
	common/BinaryValue.h \
	common/BaseOverlay.h \
	common/ExtTCPSocketMap.h \
	common/Vector2D.h \
	common/ProxNodeHandle.h \
	applications/i3/I3.h \
	common/IterativeLookupConfiguration.h \
	common/BaseApp.h \
	common/RecursiveLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	applications/i3/I3Message_m.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	applications/i3/I3Message.h \
	common/AbstractLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	applications/i3/I3Trigger.h \
	applications/i3/I3IdentifierStack.h \
	common/RpcState.h \
	$(INET_OVERSIM_20101019_PROJ)/src/applications/udpapp/UDPAppBase.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	applications/i3/I3Identifier.h \
	common/NodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/InitStages.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	common/OverSimMessage_m.h \
	common/RpcListener.h \
	common/NodeVector.h \
	applications/i3/I3IPAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/BaseRpc.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	applications/i3/I3BaseApp.h \
	common/Comparator.h \
	applications/i3/I3SubIdentifier.h
$O/applications/i3/i3Apps/I3TriggersMessage_m.o: applications/i3/i3Apps/I3TriggersMessage_m.cc \
	common/OverlayKey.h \
	applications/i3/i3Apps/I3TriggersMessage_m.h \
	applications/i3/I3Identifier.h
$O/applications/i3/i3Apps/I3Multicast.o: applications/i3/i3Apps/I3Multicast.cc \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	applications/i3/I3Message_m.h \
	applications/i3/I3IPAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	applications/i3/I3Message.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	applications/i3/I3Trigger.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	applications/i3/I3IdentifierStack.h \
	applications/i3/I3BaseApp.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/applications/udpapp/UDPAppBase.h \
	applications/i3/I3SubIdentifier.h \
	applications/i3/I3Identifier.h
$O/applications/i3/i3Apps/I3Anycast.o: applications/i3/i3Apps/I3Anycast.cc \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	applications/i3/I3Message_m.h \
	applications/i3/I3IPAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	applications/i3/I3Message.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	applications/i3/I3Trigger.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	applications/i3/I3IdentifierStack.h \
	applications/i3/I3BaseApp.h \
	$(INET_OVERSIM_20101019_PROJ)/src/applications/udpapp/UDPAppBase.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	applications/i3/I3SubIdentifier.h \
	applications/i3/I3Identifier.h
$O/applications/i3/i3Apps/I3HostMobility.o: applications/i3/i3Apps/I3HostMobility.cc \
	common/BinaryValue.h \
	common/BaseOverlay.h \
	common/ExtTCPSocketMap.h \
	common/Vector2D.h \
	common/ProxNodeHandle.h \
	applications/i3/I3.h \
	common/IterativeLookupConfiguration.h \
	common/BaseApp.h \
	common/RecursiveLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	applications/i3/I3Message_m.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	applications/i3/I3Message.h \
	common/AbstractLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	applications/i3/I3Trigger.h \
	applications/i3/I3IdentifierStack.h \
	common/RpcState.h \
	$(INET_OVERSIM_20101019_PROJ)/src/applications/udpapp/UDPAppBase.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	applications/i3/I3Identifier.h \
	common/NodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/InitStages.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	common/OverSimMessage_m.h \
	common/RpcListener.h \
	common/NodeVector.h \
	applications/i3/I3IPAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/BaseRpc.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	applications/i3/I3BaseApp.h \
	common/Comparator.h \
	applications/i3/I3SubIdentifier.h
$O/applications/i3/i3Apps/I3Triggers.o: applications/i3/i3Apps/I3Triggers.cc \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	applications/i3/I3Message_m.h \
	applications/i3/I3IPAddress.h \
	applications/i3/i3Apps/I3TriggersMessage_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	applications/i3/I3Message.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	applications/i3/I3Trigger.h \
	common/TransportAddress.h \
	applications/i3/I3IdentifierStack.h \
	applications/i3/I3BaseApp.h \
	$(INET_OVERSIM_20101019_PROJ)/src/applications/udpapp/UDPAppBase.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	applications/i3/I3SubIdentifier.h \
	applications/i3/I3Identifier.h
$O/applications/i3/i3Apps/I3Session.o: applications/i3/i3Apps/I3Session.cc \
	applications/i3/i3Apps/I3SessionMessage_m.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	applications/i3/I3Message_m.h \
	applications/i3/I3IPAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	applications/i3/I3Message.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	applications/i3/I3Trigger.h \
	common/TransportAddress.h \
	applications/i3/I3IdentifierStack.h \
	applications/i3/I3BaseApp.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/applications/udpapp/UDPAppBase.h \
	applications/i3/I3SubIdentifier.h \
	applications/i3/I3Identifier.h
$O/applications/i3/i3Apps/I3Composite.o: applications/i3/i3Apps/I3Composite.cc \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	applications/i3/I3Message_m.h \
	applications/i3/I3IPAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	applications/i3/I3Message.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	applications/i3/I3Trigger.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	applications/i3/I3IdentifierStack.h \
	applications/i3/I3BaseApp.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/applications/udpapp/UDPAppBase.h \
	applications/i3/I3SubIdentifier.h \
	applications/i3/I3Identifier.h
$O/applications/i3/i3Apps/I3LatencyStretch.o: applications/i3/i3Apps/I3LatencyStretch.cc \
	common/BinaryValue.h \
	common/BaseOverlay.h \
	common/ExtTCPSocketMap.h \
	common/Vector2D.h \
	common/ProxNodeHandle.h \
	applications/i3/I3.h \
	common/IterativeLookupConfiguration.h \
	common/BaseApp.h \
	common/RecursiveLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	applications/i3/I3Message_m.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	applications/i3/I3Message.h \
	common/AbstractLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	applications/i3/I3Trigger.h \
	applications/i3/I3IdentifierStack.h \
	common/RpcState.h \
	$(INET_OVERSIM_20101019_PROJ)/src/applications/udpapp/UDPAppBase.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	applications/i3/I3Identifier.h \
	common/NodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/InitStages.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	common/OverSimMessage_m.h \
	common/RpcListener.h \
	common/NodeVector.h \
	applications/i3/I3IPAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/BaseRpc.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	applications/i3/I3BaseApp.h \
	common/Comparator.h \
	applications/i3/I3SubIdentifier.h
$O/applications/i3/i3Apps/I3SessionMessage_m.o: applications/i3/i3Apps/I3SessionMessage_m.cc \
	applications/i3/i3Apps/I3SessionMessage_m.h \
	common/OverlayKey.h \
	applications/i3/I3Identifier.h
$O/applications/kbrtestapp/KBRTestApp.o: applications/kbrtestapp/KBRTestApp.cc \
	common/BaseOverlay.h \
	common/BinaryValue.h \
	common/ExtTCPSocketMap.h \
	common/Vector2D.h \
	common/ProxNodeHandle.h \
	common/HashFunc.h \
	common/IterativeLookupConfiguration.h \
	common/BaseApp.h \
	common/RecursiveLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	applications/kbrtestapp/KBRTestMessage_m.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	common/AbstractLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	common/RpcState.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	common/NodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/InitStages.h \
	common/oversim_byteswap.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	common/OverSimMessage.h \
	common/GlobalStatistics.h \
	common/OverSimMessage_m.h \
	common/UnderlayConfigurator.h \
	common/NodeVector.h \
	common/RpcListener.h \
	common/ChurnGenerator.h \
	common/GlobalNodeList.h \
	common/PeerStorage.h \
	applications/kbrtestapp/KBRTestApp.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/BaseRpc.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/PeerInfo.h \
	common/Comparator.h
$O/applications/kbrtestapp/KBRTestMessage_m.o: applications/kbrtestapp/KBRTestMessage_m.cc \
	common/BinaryValue.h \
	common/OverlayKey.h \
	common/Vector2D.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	applications/kbrtestapp/KBRTestMessage_m.h \
	common/OverSimMessage_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/applications/myapplication/MyMessage_m.o: applications/myapplication/MyMessage_m.cc \
	common/oversim_mapset.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	applications/myapplication/MyMessage_m.h
$O/applications/myapplication/MyApplication.o: applications/myapplication/MyApplication.cc \
	common/BinaryValue.h \
	common/BaseOverlay.h \
	common/ExtTCPSocketMap.h \
	common/Vector2D.h \
	common/ProxNodeHandle.h \
	common/BaseApp.h \
	common/IterativeLookupConfiguration.h \
	common/RecursiveLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	common/AbstractLookup.h \
	common/RpcState.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	common/NodeHandle.h \
	common/OverlayKey.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/InitStages.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	common/OverSimMessage_m.h \
	common/GlobalStatistics.h \
	common/UnderlayConfigurator.h \
	common/RpcListener.h \
	common/NodeVector.h \
	applications/myapplication/MyApplication.h \
	common/BaseRpc.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/Comparator.h \
	applications/myapplication/MyMessage_m.h
$O/applications/realworldtestapp/RealWorldTestApp.o: applications/realworldtestapp/RealWorldTestApp.cc \
	common/BinaryValue.h \
	common/BaseOverlay.h \
	common/ExtTCPSocketMap.h \
	common/Vector2D.h \
	common/ProxNodeHandle.h \
	common/BaseApp.h \
	common/IterativeLookupConfiguration.h \
	common/RecursiveLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	common/AbstractLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	common/RpcState.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	common/NodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/InitStages.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	common/OverSimMessage_m.h \
	applications/realworldtestapp/RealWorldTestMessage_m.h \
	common/NodeVector.h \
	common/RpcListener.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/BaseRpc.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	applications/realworldtestapp/RealWorldTestApp.h \
	common/Comparator.h
$O/applications/realworldtestapp/RealWorldTestPacketParser.o: applications/realworldtestapp/RealWorldTestPacketParser.cc \
	applications/realworldtestapp/RealWorldTestPacketParser.h \
	applications/realworldtestapp/RealWorldTestMessage_m.h \
	common/PacketParser.h
$O/applications/realworldtestapp/RealWorldTestMessage_m.o: applications/realworldtestapp/RealWorldTestMessage_m.cc \
	applications/realworldtestapp/RealWorldTestMessage_m.h
$O/applications/scribe/ScribeGroup.o: applications/scribe/ScribeGroup.cc \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/OverSimMessage_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	applications/scribe/ScribeGroup.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	applications/scribe/ScribeMessage_m.h \
	common/NodeHandle.h
$O/applications/scribe/Scribe.o: applications/scribe/Scribe.cc \
	common/BaseOverlay.h \
	common/BinaryValue.h \
	common/ExtTCPSocketMap.h \
	common/Vector2D.h \
	common/ProxNodeHandle.h \
	common/HashFunc.h \
	common/IterativeLookupConfiguration.h \
	common/BaseApp.h \
	common/RecursiveLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	common/AbstractLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	applications/scribe/ScribeGroup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	applications/scribe/ScribeMessage_m.h \
	common/RpcState.h \
	common/RpcMacros.h \
	common/NodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/InitStages.h \
	common/oversim_byteswap.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	common/OverSimMessage_m.h \
	common/GlobalStatistics.h \
	applications/scribe/Scribe.h \
	common/GlobalNodeList.h \
	common/ChurnGenerator.h \
	common/RpcListener.h \
	common/NodeVector.h \
	common/PeerStorage.h \
	common/BaseRpc.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/PeerInfo.h \
	common/Comparator.h
$O/applications/scribe/ScribeMessage_m.o: applications/scribe/ScribeMessage_m.cc \
	common/BinaryValue.h \
	common/OverlayKey.h \
	common/Vector2D.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/OverSimMessage_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	applications/scribe/ScribeGroup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	applications/scribe/ScribeMessage_m.h \
	common/NodeHandle.h
$O/applications/simplegameclient/MovementGenerator.o: applications/simplegameclient/MovementGenerator.cc \
	applications/simplegameclient/MovementGenerator.h \
	common/OverlayKey.h \
	common/Vector2D.h \
	common/oversim_mapset.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h \
	applications/simplegameclient/BoundingBox2D.h \
	applications/simplegameclient/GlobalCoordinator.h
$O/applications/simplegameclient/SimpleGameClient.o: applications/simplegameclient/SimpleGameClient.cc \
	common/Vector2D.h \
	common/ProxNodeHandle.h \
	common/GlobalStatisticsAccess.h \
	common/BaseApp.h \
	common/RecursiveLookup.h \
	applications/simplegameclient/realWorldRoaming.h \
	applications/simplegameclient/SimpleGameClient_m.h \
	applications/simplegameclient/greatGathering.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	applications/simplegameclient/hotspotRoaming.h \
	common/RpcMacros.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/oversim_mapset.h \
	applications/simplegameclient/SimpleGameClient.h \
	applications/simplegameclient/traverseRoaming.h \
	common/CommonMessages_m.h \
	underlay/singlehostunderlay/tunoutscheduler.h \
	common/OverSimMessage.h \
	applications/simplegameclient/SCPacket.h \
	common/RpcListener.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/Comparator.h \
	common/BaseOverlay.h \
	common/BinaryValue.h \
	common/ExtTCPSocketMap.h \
	applications/simplegameclient/MovementGenerator.h \
	common/IterativeLookupConfiguration.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	underlay/singlehostunderlay/realtimescheduler.h \
	applications/simplegameclient/groupRoaming.h \
	common/AbstractLookup.h \
	common/RpcState.h \
	common/NodeHandle.h \
	common/OverlayKey.h \
	common/InitStages.h \
	applications/simplegameclient/randomRoaming.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	common/OverSimMessage_m.h \
	common/GlobalStatistics.h \
	common/NodeVector.h \
	applications/simplegameclient/GlobalCoordinator.h \
	common/BaseRpc.h \
	common/TransportAddress.h \
	applications/simplegameclient/BoundingBox2D.h
$O/applications/simplegameclient/SimpleGameClient_m.o: applications/simplegameclient/SimpleGameClient_m.cc \
	common/OverlayKey.h \
	common/Vector2D.h \
	common/oversim_mapset.h \
	applications/simplegameclient/SimpleGameClient_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/applications/simplegameclient/greatGathering.o: applications/simplegameclient/greatGathering.cc \
	applications/simplegameclient/MovementGenerator.h \
	common/OverlayKey.h \
	common/Vector2D.h \
	common/oversim_mapset.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	applications/simplegameclient/GlobalCoordinator.h \
	applications/simplegameclient/greatGathering.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	applications/simplegameclient/BoundingBox2D.h \
	common/NodeHandle.h
$O/applications/simplegameclient/traverseRoaming.o: applications/simplegameclient/traverseRoaming.cc \
	applications/simplegameclient/MovementGenerator.h \
	common/OverlayKey.h \
	common/Vector2D.h \
	common/oversim_mapset.h \
	applications/simplegameclient/traverseRoaming.h \
	common/GlobalStatisticsAccess.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/GlobalStatistics.h \
	applications/simplegameclient/GlobalCoordinator.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	applications/simplegameclient/BoundingBox2D.h \
	common/NodeHandle.h
$O/applications/simplegameclient/ConnectivityProbeApp.o: applications/simplegameclient/ConnectivityProbeApp.cc \
	common/Vector2D.h \
	common/GlobalStatisticsAccess.h \
	common/ProxNodeHandle.h \
	common/BaseApp.h \
	common/RecursiveLookup.h \
	applications/simplegameclient/realWorldRoaming.h \
	applications/simplegameclient/SimpleGameClient_m.h \
	applications/simplegameclient/greatGathering.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	applications/simplegameclient/hotspotRoaming.h \
	common/RpcMacros.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/oversim_mapset.h \
	applications/simplegameclient/SimpleGameClient.h \
	applications/simplegameclient/traverseRoaming.h \
	common/CommonMessages_m.h \
	underlay/singlehostunderlay/tunoutscheduler.h \
	common/OverSimMessage.h \
	applications/simplegameclient/SCPacket.h \
	common/RpcListener.h \
	applications/simplegameclient/ConnectivityProbeApp.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/Comparator.h \
	common/BaseOverlay.h \
	common/BinaryValue.h \
	applications/simplegameclient/MovementGenerator.h \
	common/ExtTCPSocketMap.h \
	common/IterativeLookupConfiguration.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	underlay/singlehostunderlay/realtimescheduler.h \
	applications/simplegameclient/groupRoaming.h \
	common/AbstractLookup.h \
	common/RpcState.h \
	common/NodeHandle.h \
	common/OverlayKey.h \
	common/InitStages.h \
	applications/simplegameclient/randomRoaming.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	common/OverSimMessage_m.h \
	common/GlobalStatistics.h \
	applications/simplegameclient/GlobalCoordinator.h \
	common/NodeVector.h \
	common/BaseRpc.h \
	common/TransportAddress.h \
	applications/simplegameclient/BoundingBox2D.h
$O/applications/simplegameclient/groupRoaming.o: applications/simplegameclient/groupRoaming.cc \
	applications/simplegameclient/MovementGenerator.h \
	common/OverlayKey.h \
	common/Vector2D.h \
	common/oversim_mapset.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	applications/simplegameclient/GlobalCoordinator.h \
	applications/simplegameclient/groupRoaming.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h \
	applications/simplegameclient/BoundingBox2D.h
$O/applications/simplegameclient/GlobalCoordinator.o: applications/simplegameclient/GlobalCoordinator.cc \
	common/OverlayKey.h \
	common/Vector2D.h \
	common/oversim_mapset.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h \
	applications/simplegameclient/GlobalCoordinator.h
$O/applications/simplegameclient/BoundingBox2D.o: applications/simplegameclient/BoundingBox2D.cc \
	common/Vector2D.h \
	applications/simplegameclient/BoundingBox2D.h
$O/applications/simplegameclient/hotspotRoaming.o: applications/simplegameclient/hotspotRoaming.cc \
	applications/simplegameclient/MovementGenerator.h \
	common/OverlayKey.h \
	common/Vector2D.h \
	common/oversim_mapset.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	applications/simplegameclient/GlobalCoordinator.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	applications/simplegameclient/hotspotRoaming.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/StringConvert.h \
	applications/simplegameclient/BoundingBox2D.h \
	common/NodeHandle.h
$O/applications/simplegameclient/randomRoaming.o: applications/simplegameclient/randomRoaming.cc \
	applications/simplegameclient/MovementGenerator.h \
	common/OverlayKey.h \
	common/Vector2D.h \
	common/oversim_mapset.h \
	applications/simplegameclient/randomRoaming.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	applications/simplegameclient/GlobalCoordinator.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	applications/simplegameclient/BoundingBox2D.h \
	common/NodeHandle.h
$O/applications/simplegameclient/realWorldRoaming.o: applications/simplegameclient/realWorldRoaming.cc \
	applications/simplegameclient/MovementGenerator.h \
	common/OverlayKey.h \
	common/Vector2D.h \
	common/oversim_mapset.h \
	applications/simplegameclient/realWorldRoaming.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	applications/simplegameclient/GlobalCoordinator.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h \
	applications/simplegameclient/BoundingBox2D.h
$O/applications/tcpexampleapp/TCPExampleApp.o: applications/tcpexampleapp/TCPExampleApp.cc \
	common/BinaryValue.h \
	common/BaseOverlay.h \
	common/ExtTCPSocketMap.h \
	common/Vector2D.h \
	common/ProxNodeHandle.h \
	common/HashFunc.h \
	common/IterativeLookupConfiguration.h \
	common/BaseApp.h \
	common/RecursiveLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	common/AbstractLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	common/RpcState.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	common/NodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/InitStages.h \
	common/oversim_byteswap.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	common/OverSimMessage_m.h \
	common/GlobalStatistics.h \
	common/UnderlayConfigurator.h \
	common/NodeVector.h \
	common/RpcListener.h \
	common/GlobalNodeList.h \
	common/ChurnGenerator.h \
	common/PeerStorage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/BaseRpc.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	applications/tcpexampleapp/TCPExampleMessage_m.h \
	common/TransportAddress.h \
	common/PeerInfo.h \
	common/Comparator.h \
	applications/tcpexampleapp/TCPExampleApp.h
$O/applications/tcpexampleapp/TCPExampleMessage_m.o: applications/tcpexampleapp/TCPExampleMessage_m.cc \
	common/oversim_mapset.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	applications/tcpexampleapp/TCPExampleMessage_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h
$O/applications/tierdummy/TierDummy.o: applications/tierdummy/TierDummy.cc \
	common/BaseOverlay.h \
	common/BinaryValue.h \
	common/ExtTCPSocketMap.h \
	common/Vector2D.h \
	common/ProxNodeHandle.h \
	common/BaseApp.h \
	common/IterativeLookupConfiguration.h \
	common/RecursiveLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	applications/tierdummy/TierDummy.h \
	common/AbstractLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcState.h \
	common/RpcMacros.h \
	common/NodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/InitStages.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	common/OverSimMessage_m.h \
	common/NodeVector.h \
	common/RpcListener.h \
	common/BaseRpc.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/Comparator.h
$O/common/PeerInfo.o: common/PeerInfo.cc \
	common/PeerInfo.h
$O/common/RandomChurn.o: common/RandomChurn.cc \
	common/oversim_mapset.h \
	common/RandomChurn.h \
	common/GlobalStatisticsAccess.h \
	common/InitStages.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/GlobalStatistics.h \
	common/UnderlayConfigurator.h \
	common/ChurnGenerator.h
$O/common/OverSimMessage.o: common/OverSimMessage.cc \
	common/OverSimMessage.h \
	common/cnetcommbuffer.h \
	common/OverSimMessage_m.h
$O/common/NoChurn.o: common/NoChurn.cc \
	common/oversim_mapset.h \
	common/InitStages.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NoChurn.h \
	common/UnderlayConfigurator.h \
	common/ChurnGenerator.h
$O/common/SHA1.o: common/SHA1.cc \
	common/SHA1.h
$O/common/GlobalStatistics.o: common/GlobalStatistics.cc \
	common/GlobalStatistics.h
$O/common/BootstrapList.o: common/BootstrapList.cc \
	common/BaseOverlay.h \
	common/BinaryValue.h \
	common/ExtTCPSocketMap.h \
	common/Vector2D.h \
	common/ProxNodeHandle.h \
	common/HashFunc.h \
	common/BaseApp.h \
	common/IterativeLookupConfiguration.h \
	common/RecursiveLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	common/AbstractLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	common/BootstrapNodeHandle.h \
	common/RpcState.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	common/NodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/InitStages.h \
	common/CommonMessages_m.h \
	common/oversim_byteswap.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	common/OverSimMessage.h \
	common/OverSimMessage_m.h \
	common/UnderlayConfigurator.h \
	common/RpcListener.h \
	common/ChurnGenerator.h \
	common/GlobalNodeList.h \
	common/NodeVector.h \
	common/PeerStorage.h \
	common/BootstrapList.h \
	common/UnderlayConfiguratorAccess.h \
	common/BaseRpc.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/hashWatch.h \
	underlay/singlehostunderlay/ZeroconfConnector.h \
	common/PeerInfo.h \
	common/Comparator.h
$O/common/Vivaldi.o: common/Vivaldi.cc \
	common/BaseOverlay.h \
	common/cbr/simplex.h \
	common/BinaryValue.h \
	common/ExtTCPSocketMap.h \
	common/Vector2D.h \
	common/GlobalStatisticsAccess.h \
	common/ProxNodeHandle.h \
	common/HashFunc.h \
	common/Nps_m.h \
	common/IterativeLookupConfiguration.h \
	common/BaseApp.h \
	common/RecursiveLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/CoordinateSystem.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	common/AbstractLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	common/RpcState.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	common/NodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/InitStages.h \
	common/CommonMessages_m.h \
	common/oversim_byteswap.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	common/OverSimMessage.h \
	common/GlobalStatistics.h \
	common/OverSimMessage_m.h \
	common/Vivaldi.h \
	common/NodeVector.h \
	common/RpcListener.h \
	common/BaseRpc.h \
	common/Nps.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	common/NeighborCache.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/SVivaldi.h \
	common/TransportAddress.h \
	common/Comparator.h \
	common/SimpleNcs.h \
	common/cbr/yang.h
$O/common/Nps.o: common/Nps.cc \
	common/cbr/simplex.h \
	common/Vector2D.h \
	common/GlobalStatisticsAccess.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/tcp/TCPSegment.h \
	common/ProxNodeHandle.h \
	common/BaseApp.h \
	common/RecursiveLookup.h \
	common/CoordinateSystem.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	common/UnderlayConfigurator.h \
	common/ChurnGenerator.h \
	common/RpcListener.h \
	common/GlobalNodeListAccess.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/cbr/CoordBasedRouting.h \
	common/Comparator.h \
	common/SimpleNcs.h \
	common/cbr/yang.h \
	common/BinaryValue.h \
	common/BaseOverlay.h \
	common/ExtTCPSocketMap.h \
	underlay/simpleunderlay/SimpleNodeEntry.h \
	common/Nps_m.h \
	common/HashFunc.h \
	common/IterativeLookupConfiguration.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	common/cbr/CoordBasedRoutingAccess.h \
	common/AbstractLookup.h \
	common/RpcState.h \
	underlay/simpleunderlay/SimpleInfo.h \
	common/NodeHandle.h \
	common/OverlayKey.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/tcp/TCPSegment_m.h \
	common/InitStages.h \
	common/oversim_byteswap.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	common/GlobalStatistics.h \
	common/OverSimMessage_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/udp/UDPPacket_m.h \
	common/Vivaldi.h \
	common/NodeVector.h \
	common/GlobalNodeList.h \
	common/PeerStorage.h \
	common/BaseRpc.h \
	common/Nps.h \
	common/NeighborCache.h \
	common/SVivaldi.h \
	common/TransportAddress.h \
	common/PeerInfo.h \
	common/cbr/Landmark.h
$O/common/IterativeLookup.o: common/IterativeLookup.cc \
	common/BaseOverlay.h \
	common/BinaryValue.h \
	common/ExtTCPSocketMap.h \
	common/Vector2D.h \
	common/ProxNodeHandle.h \
	common/LookupListener.h \
	common/IterativeLookupConfiguration.h \
	common/RecursiveLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	common/AbstractLookup.h \
	common/RpcState.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	common/NodeHandle.h \
	common/OverlayKey.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/InitStages.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	common/OverSimMessage_m.h \
	common/GlobalStatistics.h \
	common/UnderlayConfigurator.h \
	common/NodeVector.h \
	common/RpcListener.h \
	common/BaseRpc.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/Comparator.h \
	common/IterativeLookup.h
$O/common/ParetoChurn.o: common/ParetoChurn.cc \
	common/ParetoChurn.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/GlobalStatisticsAccess.h \
	common/InitStages.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/Churn_m.h \
	common/GlobalStatistics.h \
	common/UnderlayConfigurator.h \
	common/ChurnGenerator.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/common/TopologyVis.o: common/TopologyVis.cc \
	common/BinaryValue.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/InitStages.h \
	common/HashFunc.h \
	common/oversim_byteswap.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/GlobalNodeList.h \
	common/ChurnGenerator.h \
	common/PeerStorage.h \
	common/TopologyVis.h \
	common/GlobalNodeListAccess.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/PeerInfo.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/common/ProxNodeHandle.o: common/ProxNodeHandle.cc \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/ProxNodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/common/BaseOverlay.o: common/BaseOverlay.cc \
	common/Vector2D.h \
	common/ProxNodeHandle.h \
	common/GlobalStatisticsAccess.h \
	common/LookupListener.h \
	common/BaseApp.h \
	common/RecursiveLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/UDPSocket.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	common/BootstrapNodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/applications/udpapp/UDPAppBase.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	common/UnderlayConfigurator.h \
	common/ChurnGenerator.h \
	common/RpcListener.h \
	common/BootstrapList.h \
	common/GlobalNodeListAccess.h \
	common/UnderlayConfiguratorAccess.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/UDPControlInfo_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/Comparator.h \
	common/BaseOverlay.h \
	common/BinaryValue.h \
	common/ExtTCPSocketMap.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/NotifierConsts.h \
	common/HashFunc.h \
	common/IterativeLookupConfiguration.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/NotificationBoard.h \
	common/GlobalParametersAccess.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	common/AbstractLookup.h \
	common/RpcState.h \
	common/NodeHandle.h \
	common/OverlayKey.h \
	common/InitStages.h \
	common/oversim_byteswap.h \
	common/GlobalParameters.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	common/OverSimMessage_m.h \
	common/GlobalStatistics.h \
	common/NodeVector.h \
	common/GlobalNodeList.h \
	common/PeerStorage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/BaseRpc.h \
	common/TransportAddress.h \
	common/PeerInfo.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/ModuleAccess.h \
	common/IterativeLookup.h
$O/common/LifetimeChurn.o: common/LifetimeChurn.cc \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/GlobalStatisticsAccess.h \
	common/InitStages.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/Churn_m.h \
	common/GlobalStatistics.h \
	common/UnderlayConfigurator.h \
	common/ChurnGenerator.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/LifetimeChurn.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/common/BaseTcpSupport.o: common/BaseTcpSupport.cc \
	common/ExtTCPSocketMap.h \
	common/BaseTcpSupport.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/oversim_mapset.h \
	common/GlobalStatisticsAccess.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/UDPControlInfo_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/GlobalStatistics.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/UDPSocket.h
$O/common/PeerStorage.o: common/PeerStorage.cc \
	common/PeerStorage.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	common/HashFunc.h \
	common/oversim_byteswap.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/PeerInfo.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/common/ChurnGenerator.o: common/ChurnGenerator.cc \
	common/InitStages.h \
	common/UnderlayConfiguratorAccess.h \
	common/UnderlayConfigurator.h \
	common/ChurnGenerator.h
$O/common/BinaryValue.o: common/BinaryValue.cc \
	common/BinaryValue.h
$O/common/RecursiveLookup.o: common/RecursiveLookup.cc \
	common/BaseOverlay.h \
	common/BinaryValue.h \
	common/ExtTCPSocketMap.h \
	common/Vector2D.h \
	common/ProxNodeHandle.h \
	common/LookupListener.h \
	common/IterativeLookupConfiguration.h \
	common/RecursiveLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	common/AbstractLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	common/RpcState.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	common/NodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/InitStages.h \
	common/CommonMessages_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	common/OverSimMessage.h \
	common/OverSimMessage_m.h \
	common/RpcListener.h \
	common/NodeVector.h \
	common/BaseRpc.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/Comparator.h
$O/common/NeighborCache.o: common/NeighborCache.cc \
	common/cbr/simplex.h \
	common/Vector2D.h \
	common/GlobalStatisticsAccess.h \
	common/ProxNodeHandle.h \
	common/BaseApp.h \
	common/RecursiveLookup.h \
	common/CoordinateSystem.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/oversim_mapset.h \
	common/cbr/CoordMessages_m.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	common/ChurnGenerator.h \
	common/RpcListener.h \
	common/GlobalNodeListAccess.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/Comparator.h \
	common/SimpleNcs.h \
	common/cbr/yang.h \
	common/BinaryValue.h \
	common/BaseOverlay.h \
	common/ExtTCPSocketMap.h \
	common/HashFunc.h \
	common/Nps_m.h \
	common/IterativeLookupConfiguration.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	common/AbstractLookup.h \
	common/RpcState.h \
	common/NodeHandle.h \
	common/OverlayKey.h \
	common/InitStages.h \
	common/oversim_byteswap.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	common/GlobalStatistics.h \
	common/OverSimMessage_m.h \
	common/Vivaldi.h \
	common/GlobalNodeList.h \
	common/NodeVector.h \
	common/PeerStorage.h \
	common/Nps.h \
	common/BaseRpc.h \
	common/NeighborCache.h \
	common/SVivaldi.h \
	common/TransportAddress.h \
	common/hashWatch.h \
	common/PeerInfo.h
$O/common/GlobalNodeList.o: common/GlobalNodeList.cc \
	common/BaseOverlay.h \
	common/BinaryValue.h \
	common/ExtTCPSocketMap.h \
	common/Vector2D.h \
	common/GlobalStatisticsAccess.h \
	common/ProxNodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/NotifierConsts.h \
	common/HashFunc.h \
	common/IterativeLookupConfiguration.h \
	common/BaseApp.h \
	common/RecursiveLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/NotificationBoard.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	common/AbstractLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	common/BootstrapNodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcState.h \
	common/RpcMacros.h \
	common/NodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/InitStages.h \
	common/oversim_byteswap.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	common/OverSimMessage_m.h \
	common/GlobalStatistics.h \
	common/RpcListener.h \
	common/ChurnGenerator.h \
	common/GlobalNodeList.h \
	common/NodeVector.h \
	common/PeerStorage.h \
	common/BootstrapList.h \
	common/BaseRpc.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/hashWatch.h \
	common/PeerInfo.h \
	common/Comparator.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/ModuleAccess.h
$O/common/Vector2D.o: common/Vector2D.cc \
	common/Vector2D.h
$O/common/cnetcommbuffer.o: common/cnetcommbuffer.cc \
	common/cnetcommbuffer.h
$O/common/CommonMessages_m.o: common/CommonMessages_m.cc \
	common/BinaryValue.h \
	common/OverlayKey.h \
	common/Vector2D.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/OverSimMessage_m.h \
	common/NodeHandle.h
$O/common/BaseRpc.o: common/BaseRpc.cc \
	common/cbr/simplex.h \
	common/Vector2D.h \
	common/ProxNodeHandle.h \
	common/GlobalStatisticsAccess.h \
	common/BaseApp.h \
	common/RecursiveLookup.h \
	common/cnetcommbuffer.h \
	common/CoordinateSystem.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	common/UnderlayConfigurator.h \
	common/RpcListener.h \
	common/UnderlayConfiguratorAccess.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/Comparator.h \
	common/SimpleNcs.h \
	common/cbr/yang.h \
	common/BinaryValue.h \
	common/CryptoModule.h \
	common/BaseOverlay.h \
	common/ExtTCPSocketMap.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/NotifierConsts.h \
	common/Nps_m.h \
	common/HashFunc.h \
	common/IterativeLookupConfiguration.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/NotificationBoard.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	common/AbstractLookup.h \
	common/RpcState.h \
	common/NodeHandle.h \
	common/OverlayKey.h \
	common/InitStages.h \
	common/oversim_byteswap.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	common/OverlayAccess.h \
	common/GlobalStatistics.h \
	common/OverSimMessage_m.h \
	common/Vivaldi.h \
	common/NodeVector.h \
	common/BaseRpc.h \
	common/Nps.h \
	common/NeighborCache.h \
	common/SVivaldi.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/ModuleAccess.h
$O/common/GlobalTraceManager.o: common/GlobalTraceManager.cc \
	common/BinaryValue.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/InitStages.h \
	common/HashFunc.h \
	common/oversim_byteswap.h \
	common/GlobalTraceManager_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/UnderlayConfigurator.h \
	common/GlobalTraceManager.h \
	common/ChurnGenerator.h \
	common/GlobalNodeList.h \
	common/PeerStorage.h \
	common/TraceChurn.h \
	common/UnderlayConfiguratorAccess.h \
	common/GlobalNodeListAccess.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/PeerInfo.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/common/CryptoModule.o: common/CryptoModule.cc \
	common/BinaryValue.h \
	common/CryptoModule.h \
	common/BaseOverlay.h \
	common/ExtTCPSocketMap.h \
	common/Vector2D.h \
	common/ProxNodeHandle.h \
	common/GlobalStatisticsAccess.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/NotifierConsts.h \
	common/IterativeLookupConfiguration.h \
	common/RecursiveLookup.h \
	common/cnetcommbuffer.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/NotificationBoard.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	common/AbstractLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	common/RpcState.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	common/NodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/InitStages.h \
	common/CommonMessages_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	common/OverSimMessage.h \
	common/OverlayAccess.h \
	common/GlobalStatistics.h \
	common/OverSimMessage_m.h \
	common/RpcListener.h \
	common/NodeVector.h \
	common/BaseRpc.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/Comparator.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/ModuleAccess.h
$O/common/BaseApp.o: common/BaseApp.cc \
	common/BaseOverlay.h \
	common/BinaryValue.h \
	common/ExtTCPSocketMap.h \
	common/Vector2D.h \
	common/GlobalStatisticsAccess.h \
	common/ProxNodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/NotifierConsts.h \
	common/HashFunc.h \
	common/IterativeLookupConfiguration.h \
	common/BaseApp.h \
	common/RecursiveLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/NotificationBoard.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/UDPSocket.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	common/AbstractLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/applications/udpapp/UDPAppBase.h \
	common/RpcState.h \
	common/RpcMacros.h \
	common/NodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/InitStages.h \
	common/CommonMessages_m.h \
	common/oversim_byteswap.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	common/OverSimMessage.h \
	common/OverlayAccess.h \
	common/OverSimMessage_m.h \
	common/GlobalStatistics.h \
	common/UnderlayConfigurator.h \
	common/NodeVector.h \
	common/ChurnGenerator.h \
	common/GlobalNodeList.h \
	common/RpcListener.h \
	common/PeerStorage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/UDPControlInfo_m.h \
	common/UnderlayConfiguratorAccess.h \
	common/GlobalNodeListAccess.h \
	common/BaseRpc.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/PeerInfo.h \
	common/Comparator.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/ModuleAccess.h
$O/common/Churn_m.o: common/Churn_m.cc \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/Churn_m.h \
	common/NodeHandle.h
$O/common/SimpleNcs.o: common/SimpleNcs.cc \
	common/cbr/simplex.h \
	common/Vector2D.h \
	common/GlobalStatisticsAccess.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/tcp/TCPSegment.h \
	common/ProxNodeHandle.h \
	common/BaseApp.h \
	common/RecursiveLookup.h \
	common/CoordinateSystem.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	common/RpcListener.h \
	common/ChurnGenerator.h \
	common/GlobalNodeListAccess.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/Comparator.h \
	common/SimpleNcs.h \
	common/cbr/yang.h \
	common/BaseOverlay.h \
	common/BinaryValue.h \
	common/ExtTCPSocketMap.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/NotifierConsts.h \
	underlay/simpleunderlay/SimpleNodeEntry.h \
	common/Nps_m.h \
	common/HashFunc.h \
	common/IterativeLookupConfiguration.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/NotificationBoard.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	common/AbstractLookup.h \
	common/RpcState.h \
	common/NodeHandle.h \
	underlay/simpleunderlay/SimpleInfo.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/tcp/TCPSegment_m.h \
	common/OverlayKey.h \
	common/InitStages.h \
	common/oversim_byteswap.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	common/OverlayAccess.h \
	common/GlobalStatistics.h \
	common/OverSimMessage_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/udp/UDPPacket_m.h \
	common/Vivaldi.h \
	common/GlobalNodeList.h \
	common/NodeVector.h \
	common/PeerStorage.h \
	common/BaseRpc.h \
	common/Nps.h \
	common/NeighborCache.h \
	common/SVivaldi.h \
	common/TransportAddress.h \
	common/SHA1.h \
	common/PeerInfo.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/ModuleAccess.h
$O/common/RpcListener.o: common/RpcListener.cc \
	common/BinaryValue.h \
	common/OverlayKey.h \
	common/Vector2D.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/OverSimMessage_m.h \
	common/RpcListener.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcState.h \
	common/NodeHandle.h
$O/common/GlobalTraceManager_m.o: common/GlobalTraceManager_m.cc \
	common/GlobalTraceManager_m.h
$O/common/GlobalParameters.o: common/GlobalParameters.cc \
	common/OverlayKey.h \
	common/GlobalParameters.h
$O/common/GenericPacketParser.o: common/GenericPacketParser.cc \
	common/GenericPacketParser.h \
	common/cnetcommbuffer.h \
	common/PacketParser.h
$O/common/Nps_m.o: common/Nps_m.cc \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/Nps_m.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/OverSimMessage_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/common/CoordinateSystem.o: common/CoordinateSystem.cc \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/ProxNodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/CoordinateSystem.h \
	common/NodeHandle.h
$O/common/TransportAddress.o: common/TransportAddress.cc \
	common/oversim_mapset.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h
$O/common/ExtAPIMessages_m.o: common/ExtAPIMessages_m.cc \
	common/BinaryValue.h \
	common/OverlayKey.h \
	common/Vector2D.h \
	common/oversim_mapset.h \
	common/ExtAPIMessages_m.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/OverSimMessage_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/common/OverlayKey.o: common/OverlayKey.cc \
	common/BinaryValue.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/ProxNodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/SHA1.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/Comparator.h \
	common/NodeHandle.h
$O/common/OverSimMessage_m.o: common/OverSimMessage_m.cc \
	common/OverSimMessage_m.h
$O/common/TraceChurn.o: common/TraceChurn.cc \
	common/BinaryValue.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/InitStages.h \
	common/HashFunc.h \
	common/oversim_byteswap.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/UnderlayConfigurator.h \
	common/ChurnGenerator.h \
	common/GlobalNodeList.h \
	common/PeerStorage.h \
	common/TraceChurn.h \
	common/GlobalNodeListAccess.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/PeerInfo.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/common/SVivaldi.o: common/SVivaldi.cc \
	common/BaseOverlay.h \
	common/cbr/simplex.h \
	common/BinaryValue.h \
	common/ExtTCPSocketMap.h \
	common/Vector2D.h \
	common/GlobalStatisticsAccess.h \
	common/ProxNodeHandle.h \
	common/HashFunc.h \
	common/Nps_m.h \
	common/IterativeLookupConfiguration.h \
	common/BaseApp.h \
	common/RecursiveLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/CoordinateSystem.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	common/AbstractLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	common/RpcState.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	common/NodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/InitStages.h \
	common/CommonMessages_m.h \
	common/oversim_byteswap.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	common/OverSimMessage.h \
	common/GlobalStatistics.h \
	common/OverSimMessage_m.h \
	common/Vivaldi.h \
	common/NodeVector.h \
	common/RpcListener.h \
	common/BaseRpc.h \
	common/Nps.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	common/NeighborCache.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/SVivaldi.h \
	common/TransportAddress.h \
	common/Comparator.h \
	common/SimpleNcs.h \
	common/cbr/yang.h
$O/common/BitTorrentChurn.o: common/BitTorrentChurn.cc \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/GlobalStatisticsAccess.h \
	common/InitStages.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/Churn_m.h \
	common/GlobalStatistics.h \
	common/UnderlayConfigurator.h \
	common/BitTorrentChurn.h \
	common/ChurnGenerator.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/common/UnderlayConfigurator.o: common/UnderlayConfigurator.cc \
	common/BinaryValue.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/GlobalStatisticsAccess.h \
	common/InitStages.h \
	common/HashFunc.h \
	common/oversim_byteswap.h \
	common/ChurnGeneratorAccess.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/GlobalStatistics.h \
	common/UnderlayConfigurator.h \
	common/ChurnGenerator.h \
	common/GlobalNodeList.h \
	common/PeerStorage.h \
	common/GlobalNodeListAccess.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/PeerInfo.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/ModuleAccess.h \
	common/NodeHandle.h
$O/common/NodeVector.o: common/NodeVector.cc \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/ProxNodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/Comparator.h \
	common/NodeHandle.h \
	common/NodeVector.h
$O/common/FinisherModule.o: common/FinisherModule.cc \
	common/GlobalStatisticsAccess.h \
	common/GlobalStatistics.h \
	common/FinisherModule.h
$O/common/NodeHandle.o: common/NodeHandle.cc \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/common/ExtTCPSocketMap.o: common/ExtTCPSocketMap.cc \
	common/ExtTCPSocketMap.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h
$O/common/cbr/Landmark.o: common/cbr/Landmark.cc \
	common/cbr/simplex.h \
	common/Vector2D.h \
	common/GlobalStatisticsAccess.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/tcp/TCPSegment.h \
	underlay/simpleunderlay/SimpleUnderlayConfigurator.h \
	common/ProxNodeHandle.h \
	common/BaseApp.h \
	common/RecursiveLookup.h \
	common/CoordinateSystem.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	common/BootstrapNodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/BasicModule.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	common/UnderlayConfigurator.h \
	common/RpcListener.h \
	common/ChurnGenerator.h \
	common/BootstrapList.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/Comparator.h \
	common/SimpleNcs.h \
	common/cbr/yang.h \
	common/BaseOverlay.h \
	common/BinaryValue.h \
	common/ExtTCPSocketMap.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/NotifierConsts.h \
	underlay/simpleunderlay/SimpleNodeEntry.h \
	common/Nps_m.h \
	common/HashFunc.h \
	common/IterativeLookupConfiguration.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/NotificationBoard.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	common/AbstractLookup.h \
	common/RpcState.h \
	common/NodeHandle.h \
	underlay/simpleunderlay/SimpleInfo.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/tcp/TCPSegment_m.h \
	common/OverlayKey.h \
	common/InitStages.h \
	common/oversim_byteswap.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	common/OverSimMessage_m.h \
	common/GlobalStatistics.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/udp/UDPPacket_m.h \
	common/Vivaldi.h \
	common/NodeVector.h \
	common/GlobalNodeList.h \
	common/PeerStorage.h \
	common/BaseRpc.h \
	common/Nps.h \
	common/NeighborCache.h \
	common/SVivaldi.h \
	common/TransportAddress.h \
	common/PeerInfo.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/ModuleAccess.h \
	common/cbr/Landmark.h
$O/common/cbr/yang.o: common/cbr/yang.cc \
	common/cbr/yang.h
$O/common/cbr/CoordBasedRouting.o: common/cbr/CoordBasedRouting.cc \
	common/BinaryValue.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/InitStages.h \
	common/HashFunc.h \
	common/oversim_byteswap.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/GlobalNodeList.h \
	common/ChurnGenerator.h \
	common/PeerStorage.h \
	common/GlobalNodeListAccess.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/PeerInfo.h \
	common/cbr/CoordBasedRouting.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/common/cbr/CBR-DHTMessage_m.o: common/cbr/CBR-DHTMessage_m.cc \
	common/cbr/CBR-DHTMessage_m.h \
	common/BinaryValue.h \
	common/OverlayKey.h \
	common/Vector2D.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/OverSimMessage_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	applications/dht/DHTMessage_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/common/cbr/simplex.o: common/cbr/simplex.cc \
	common/BaseOverlay.h \
	common/cbr/simplex.h \
	common/BinaryValue.h \
	common/ExtTCPSocketMap.h \
	common/Vector2D.h \
	common/GlobalStatisticsAccess.h \
	common/ProxNodeHandle.h \
	common/HashFunc.h \
	common/Nps_m.h \
	common/IterativeLookupConfiguration.h \
	common/BaseApp.h \
	common/RecursiveLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/CoordinateSystem.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	common/AbstractLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	common/RpcState.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	common/NodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/InitStages.h \
	common/CommonMessages_m.h \
	common/oversim_byteswap.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	common/OverSimMessage.h \
	common/GlobalStatistics.h \
	common/OverSimMessage_m.h \
	common/Vivaldi.h \
	common/NodeVector.h \
	common/RpcListener.h \
	common/BaseRpc.h \
	common/Nps.h \
	common/NeighborCache.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	common/SVivaldi.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/Comparator.h \
	common/SimpleNcs.h \
	common/cbr/yang.h
$O/common/cbr/CoordMessages_m.o: common/cbr/CoordMessages_m.cc \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/cbr/CoordMessages_m.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/OverSimMessage_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/common/cbr/CBR-DHT.o: common/cbr/CBR-DHT.cc \
	common/cbr/simplex.h \
	common/Vector2D.h \
	common/ProxNodeHandle.h \
	common/GlobalStatisticsAccess.h \
	common/BaseApp.h \
	common/RecursiveLookup.h \
	common/CoordinateSystem.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	applications/dht/DHTMessage_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	common/cbr/CBR-DHT.h \
	common/RpcListener.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/cbr/CoordBasedRouting.h \
	common/Comparator.h \
	common/SimpleNcs.h \
	common/cbr/yang.h \
	common/BinaryValue.h \
	common/BaseOverlay.h \
	common/cbr/CBR-DHTMessage_m.h \
	common/ExtTCPSocketMap.h \
	common/HashFunc.h \
	common/Nps_m.h \
	common/IterativeLookupConfiguration.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseTcpSupport.h \
	common/cbr/CoordBasedRoutingAccess.h \
	common/TopologyVis.h \
	common/AbstractLookup.h \
	common/RpcState.h \
	common/NodeHandle.h \
	common/OverlayKey.h \
	applications/dht/DHTDataStorage.h \
	common/InitStages.h \
	common/oversim_byteswap.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	common/OverSimMessage_m.h \
	common/GlobalStatistics.h \
	common/Vivaldi.h \
	common/NodeVector.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/BaseRpc.h \
	common/Nps.h \
	common/NeighborCache.h \
	common/SVivaldi.h \
	common/SHA1.h \
	common/TransportAddress.h
$O/overlay/bamboo/Bamboo.o: overlay/bamboo/Bamboo.cc \
	common/cbr/simplex.h \
	common/Vector2D.h \
	common/GlobalStatisticsAccess.h \
	common/ProxNodeHandle.h \
	common/LookupListener.h \
	common/BaseApp.h \
	common/RecursiveLookup.h \
	common/CoordinateSystem.h \
	overlay/pastry/PastryNeighborhoodSet.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/InterfaceEntry.h \
	overlay/pastry/BasePastry.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	common/RpcListener.h \
	overlay/pastry/PastryTypes.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/ipv4/IPv4InterfaceData.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/Comparator.h \
	common/SimpleNcs.h \
	common/cbr/yang.h \
	common/BaseOverlay.h \
	common/BinaryValue.h \
	common/ExtTCPSocketMap.h \
	overlay/pastry/PastryRoutingTable.h \
	overlay/pastry/PastryStateObject.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/NotifierConsts.h \
	common/HashFunc.h \
	common/Nps_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/IInterfaceTable.h \
	common/IterativeLookupConfiguration.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	common/AbstractLookup.h \
	common/RpcState.h \
	$(OMNET_EXTENSION_MASTER_PROJ)/include/DeleteSafeDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/linklayer/contract/MACAddress.h \
	common/NodeHandle.h \
	common/OverlayKey.h \
	common/InitStages.h \
	common/oversim_byteswap.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	overlay/bamboo/Bamboo.h \
	common/GlobalStatistics.h \
	common/OverSimMessage_m.h \
	common/Vivaldi.h \
	common/NodeVector.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	overlay/pastry/PastryLeafSet.h \
	overlay/pastry/PastryMessage_m.h \
	common/Nps.h \
	common/BaseRpc.h \
	common/NeighborCache.h \
	common/SVivaldi.h \
	common/TransportAddress.h
$O/overlay/broose/BrooseHandle.o: overlay/broose/BrooseHandle.cc \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	overlay/broose/BrooseHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/overlay/broose/Broose.o: overlay/broose/Broose.cc \
	common/BinaryValue.h \
	common/BaseOverlay.h \
	common/ExtTCPSocketMap.h \
	common/Vector2D.h \
	overlay/broose/BrooseBucket.h \
	common/ProxNodeHandle.h \
	overlay/broose/BrooseMessage_m.h \
	overlay/broose/BrooseHandle.h \
	common/LookupListener.h \
	common/IterativeLookupConfiguration.h \
	common/BaseApp.h \
	common/RecursiveLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	common/AbstractLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	overlay/broose/Broose.h \
	common/BootstrapNodeHandle.h \
	common/RpcState.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	common/NodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/InitStages.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	common/OverSimMessage_m.h \
	common/GlobalStatistics.h \
	common/RpcListener.h \
	common/NodeVector.h \
	common/BootstrapList.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/BaseRpc.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/Comparator.h
$O/overlay/broose/BrooseMessage_m.o: overlay/broose/BrooseMessage_m.cc \
	common/BinaryValue.h \
	common/OverlayKey.h \
	common/Vector2D.h \
	common/oversim_mapset.h \
	overlay/broose/BrooseMessage_m.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/OverSimMessage_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/overlay/broose/BrooseBucket.o: overlay/broose/BrooseBucket.cc \
	common/BaseOverlay.h \
	common/BinaryValue.h \
	common/ExtTCPSocketMap.h \
	common/Vector2D.h \
	overlay/broose/BrooseBucket.h \
	common/ProxNodeHandle.h \
	overlay/broose/BrooseMessage_m.h \
	overlay/broose/BrooseHandle.h \
	common/IterativeLookupConfiguration.h \
	common/RecursiveLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	common/AbstractLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	overlay/broose/Broose.h \
	common/RpcState.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	common/NodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/InitStages.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	common/OverSimMessage_m.h \
	common/RpcListener.h \
	common/NodeVector.h \
	common/BaseRpc.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/Comparator.h
$O/overlay/chord/Chord.o: overlay/chord/Chord.cc \
	common/cbr/simplex.h \
	common/Vector2D.h \
	common/GlobalStatisticsAccess.h \
	common/ProxNodeHandle.h \
	common/BaseApp.h \
	common/RecursiveLookup.h \
	common/CoordinateSystem.h \
	overlay/chord/ChordSuccessorList.h \
	overlay/chord/ChordFingerTable.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	common/BootstrapNodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	common/RpcListener.h \
	common/BootstrapList.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/Comparator.h \
	common/SimpleNcs.h \
	common/cbr/yang.h \
	common/BaseOverlay.h \
	common/BinaryValue.h \
	common/ExtTCPSocketMap.h \
	common/HashFunc.h \
	common/Nps_m.h \
	common/IterativeLookupConfiguration.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	overlay/chord/ChordMessage_m.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	common/AbstractLookup.h \
	common/RpcState.h \
	common/NodeHandle.h \
	common/OverlayKey.h \
	common/InitStages.h \
	common/GlobalParameters.h \
	common/oversim_byteswap.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	common/OverSimMessage_m.h \
	common/GlobalStatistics.h \
	common/Vivaldi.h \
	common/NodeVector.h \
	common/BaseRpc.h \
	common/Nps.h \
	common/NeighborCache.h \
	common/SVivaldi.h \
	common/TransportAddress.h \
	overlay/chord/Chord.h
$O/overlay/chord/ChordMessage_m.o: overlay/chord/ChordMessage_m.cc \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/OverSimMessage_m.h \
	overlay/chord/ChordMessage_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/overlay/chord/ChordFingerTable.o: overlay/chord/ChordFingerTable.cc \
	common/cbr/simplex.h \
	common/Vector2D.h \
	common/ProxNodeHandle.h \
	common/GlobalStatisticsAccess.h \
	common/BaseApp.h \
	common/RecursiveLookup.h \
	common/CoordinateSystem.h \
	overlay/chord/ChordSuccessorList.h \
	overlay/chord/ChordFingerTable.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	common/RpcListener.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/Comparator.h \
	common/SimpleNcs.h \
	common/cbr/yang.h \
	common/BinaryValue.h \
	common/BaseOverlay.h \
	common/ExtTCPSocketMap.h \
	common/HashFunc.h \
	common/Nps_m.h \
	common/IterativeLookupConfiguration.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	overlay/chord/ChordMessage_m.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	common/AbstractLookup.h \
	common/RpcState.h \
	common/NodeHandle.h \
	common/OverlayKey.h \
	common/InitStages.h \
	common/oversim_byteswap.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	common/OverSimMessage_m.h \
	common/GlobalStatistics.h \
	common/Vivaldi.h \
	common/NodeVector.h \
	common/BaseRpc.h \
	common/Nps.h \
	common/NeighborCache.h \
	common/SVivaldi.h \
	common/hashWatch.h \
	common/TransportAddress.h \
	overlay/chord/Chord.h
$O/overlay/chord/ChordSuccessorList.o: overlay/chord/ChordSuccessorList.cc \
	common/cbr/simplex.h \
	common/Vector2D.h \
	common/ProxNodeHandle.h \
	common/GlobalStatisticsAccess.h \
	common/BaseApp.h \
	common/RecursiveLookup.h \
	common/CoordinateSystem.h \
	overlay/chord/ChordSuccessorList.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	common/RpcListener.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/Comparator.h \
	common/SimpleNcs.h \
	common/cbr/yang.h \
	common/BaseOverlay.h \
	common/BinaryValue.h \
	common/ExtTCPSocketMap.h \
	common/HashFunc.h \
	common/Nps_m.h \
	common/IterativeLookupConfiguration.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	overlay/chord/ChordMessage_m.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	common/AbstractLookup.h \
	common/RpcState.h \
	common/NodeHandle.h \
	common/OverlayKey.h \
	common/InitStages.h \
	common/oversim_byteswap.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	common/GlobalStatistics.h \
	common/OverSimMessage_m.h \
	common/Vivaldi.h \
	common/NodeVector.h \
	common/BaseRpc.h \
	common/Nps.h \
	common/NeighborCache.h \
	common/SVivaldi.h \
	common/TransportAddress.h \
	overlay/chord/Chord.h
$O/overlay/gia/GiaKeyList.o: overlay/gia/GiaKeyList.cc \
	common/OverlayKey.h \
	overlay/gia/GiaKeyList.h
$O/overlay/gia/Gia.o: overlay/gia/Gia.cc \
	common/Vector2D.h \
	common/ProxNodeHandle.h \
	overlay/gia/GiaMessage_m.h \
	overlay/gia/GiaNeighbors.h \
	common/BaseApp.h \
	overlay/gia/GiaTokenFactory.h \
	common/RecursiveLookup.h \
	overlay/gia/GiaNode.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	common/BootstrapNodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/applications/udpapp/UDPAppBase.h \
	common/RpcMacros.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	common/UnderlayConfigurator.h \
	common/RpcListener.h \
	common/ChurnGenerator.h \
	common/BootstrapList.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/UDPControlInfo_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/Comparator.h \
	common/BinaryValue.h \
	common/BaseOverlay.h \
	common/ExtTCPSocketMap.h \
	common/ExtAPIMessages_m.h \
	common/HashFunc.h \
	common/IterativeLookupConfiguration.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	overlay/gia/GiaNeighborCandidateList.h \
	common/BaseTcpSupport.h \
	overlay/gia/GiaKeyListModule.h \
	common/TopologyVis.h \
	overlay/gia/Gia.h \
	common/AbstractLookup.h \
	common/RpcState.h \
	common/NodeHandle.h \
	common/OverlayKey.h \
	common/InitStages.h \
	overlay/gia/GiaMessageBookkeeping.h \
	common/oversim_byteswap.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	common/GlobalStatistics.h \
	common/OverSimMessage_m.h \
	common/NodeVector.h \
	common/GlobalNodeList.h \
	common/PeerStorage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/BaseRpc.h \
	common/TransportAddress.h \
	common/PeerInfo.h \
	overlay/gia/GiaKeyList.h
$O/overlay/gia/GiaNeighborCandidateList.o: overlay/gia/GiaNeighborCandidateList.cc \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	overlay/gia/GiaNeighborCandidateList.h \
	common/NodeHandle.h
$O/overlay/gia/GiaKeyListModule.o: overlay/gia/GiaKeyListModule.cc \
	common/OverlayKey.h \
	overlay/gia/GiaKeyListModule.h \
	common/InitStages.h \
	overlay/gia/GiaKeyList.h
$O/overlay/gia/GiaMessage_m.o: overlay/gia/GiaMessage_m.cc \
	common/BinaryValue.h \
	common/OverlayKey.h \
	common/Vector2D.h \
	common/oversim_mapset.h \
	overlay/gia/GiaMessage_m.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/OverSimMessage_m.h \
	overlay/gia/GiaNode.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/overlay/gia/GiaTokenFactory.o: overlay/gia/GiaTokenFactory.cc \
	common/BaseOverlay.h \
	common/BinaryValue.h \
	common/ExtTCPSocketMap.h \
	common/Vector2D.h \
	common/ProxNodeHandle.h \
	overlay/gia/GiaMessage_m.h \
	overlay/gia/GiaNeighbors.h \
	common/HashFunc.h \
	common/IterativeLookupConfiguration.h \
	common/RecursiveLookup.h \
	overlay/gia/GiaTokenFactory.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	overlay/gia/GiaNeighborCandidateList.h \
	overlay/gia/GiaNode.h \
	common/BaseTcpSupport.h \
	overlay/gia/GiaKeyListModule.h \
	common/TopologyVis.h \
	common/AbstractLookup.h \
	overlay/gia/Gia.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	common/RpcState.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/applications/udpapp/UDPAppBase.h \
	common/RpcMacros.h \
	common/NodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	overlay/gia/GiaMessageBookkeeping.h \
	common/InitStages.h \
	common/oversim_byteswap.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	common/OverSimMessage.h \
	common/OverSimMessage_m.h \
	common/UnderlayConfigurator.h \
	common/RpcListener.h \
	common/GlobalNodeList.h \
	common/NodeVector.h \
	common/ChurnGenerator.h \
	common/PeerStorage.h \
	common/BaseRpc.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/PeerInfo.h \
	common/Comparator.h \
	overlay/gia/GiaKeyList.h
$O/overlay/gia/GiaMessageBookkeeping.o: overlay/gia/GiaMessageBookkeeping.cc \
	common/BinaryValue.h \
	common/OverlayKey.h \
	common/Vector2D.h \
	common/oversim_mapset.h \
	overlay/gia/GiaMessage_m.h \
	overlay/gia/GiaNeighbors.h \
	common/CommonMessages_m.h \
	overlay/gia/GiaMessageBookkeeping.h \
	common/InitStages.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/OverSimMessage_m.h \
	overlay/gia/GiaNode.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	overlay/gia/GiaKeyList.h \
	common/NodeHandle.h
$O/overlay/gia/GiaNode.o: overlay/gia/GiaNode.cc \
	overlay/gia/GiaNode.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/overlay/gia/GiaNeighbors.o: overlay/gia/GiaNeighbors.cc \
	overlay/gia/GiaNode.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	overlay/gia/GiaNeighbors.h \
	common/InitStages.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	overlay/gia/GiaKeyList.h \
	common/NodeHandle.h
$O/overlay/kademlia/KademliaBucket.o: overlay/kademlia/KademliaBucket.cc \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/ProxNodeHandle.h \
	overlay/kademlia/KademliaBucket.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/NodeVector.h \
	overlay/kademlia/KademliaNodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/Comparator.h \
	common/NodeHandle.h
$O/overlay/kademlia/KademliaMessage_m.o: overlay/kademlia/KademliaMessage_m.cc \
	common/BinaryValue.h \
	common/OverlayKey.h \
	common/Vector2D.h \
	common/oversim_mapset.h \
	common/ProxNodeHandle.h \
	overlay/kademlia/KademliaMessage_m.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/OverSimMessage_m.h \
	common/NodeVector.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	overlay/kademlia/KademliaNodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/Comparator.h \
	common/NodeHandle.h
$O/overlay/kademlia/KademliaNodeHandle.o: overlay/kademlia/KademliaNodeHandle.cc \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/ProxNodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	overlay/kademlia/KademliaNodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/Comparator.h \
	common/NodeHandle.h \
	common/NodeVector.h
$O/overlay/kademlia/Kademlia.o: overlay/kademlia/Kademlia.cc \
	common/cbr/simplex.h \
	common/Vector2D.h \
	common/GlobalStatisticsAccess.h \
	common/ProxNodeHandle.h \
	common/LookupListener.h \
	common/BaseApp.h \
	common/RecursiveLookup.h \
	common/CoordinateSystem.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	common/BootstrapNodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	common/RpcListener.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/ipv4/IPv4InterfaceData.h \
	overlay/kademlia/Kademlia.h \
	common/BootstrapList.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	overlay/kademlia/KademliaNodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/Comparator.h \
	common/SimpleNcs.h \
	common/cbr/yang.h \
	common/BaseOverlay.h \
	common/BinaryValue.h \
	common/ExtTCPSocketMap.h \
	overlay/kademlia/KademliaMessage_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/NotifierConsts.h \
	common/Nps_m.h \
	common/HashFunc.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/IInterfaceTable.h \
	common/IterativeLookupConfiguration.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	common/AbstractLookup.h \
	common/RpcState.h \
	$(OMNET_EXTENSION_MASTER_PROJ)/include/DeleteSafeDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/linklayer/contract/MACAddress.h \
	common/NodeHandle.h \
	common/OverlayKey.h \
	overlay/kademlia/KademliaBucket.h \
	common/InitStages.h \
	common/oversim_byteswap.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	common/GlobalStatistics.h \
	common/OverSimMessage_m.h \
	common/Vivaldi.h \
	common/NodeVector.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/Nps.h \
	common/BaseRpc.h \
	common/NeighborCache.h \
	common/SVivaldi.h \
	common/TransportAddress.h
$O/overlay/koorde/Koorde.o: overlay/koorde/Koorde.cc \
	common/BaseOverlay.h \
	common/BinaryValue.h \
	common/ExtTCPSocketMap.h \
	common/Vector2D.h \
	common/ProxNodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/NotifierConsts.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/IInterfaceTable.h \
	common/IterativeLookupConfiguration.h \
	common/RecursiveLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	common/AbstractLookup.h \
	common/RpcState.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	$(OMNET_EXTENSION_MASTER_PROJ)/include/DeleteSafeDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/linklayer/contract/MACAddress.h \
	common/NodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/InitStages.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	common/OverSimMessage_m.h \
	common/GlobalStatistics.h \
	common/NodeVector.h \
	common/RpcListener.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/ipv4/IPv4InterfaceData.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/BaseRpc.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/Comparator.h \
	overlay/koorde/Koorde.h
$O/overlay/myoverlay/MyOverlay.o: overlay/myoverlay/MyOverlay.cc \
	common/BinaryValue.h \
	common/BaseOverlay.h \
	common/ExtTCPSocketMap.h \
	common/Vector2D.h \
	common/ProxNodeHandle.h \
	overlay/myoverlay/MyOverlay_m.h \
	common/IterativeLookupConfiguration.h \
	common/RecursiveLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	common/AbstractLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	common/RpcState.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	common/NodeHandle.h \
	common/OverlayKey.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/oversim_mapset.h \
	common/InitStages.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	common/OverSimMessage_m.h \
	common/GlobalStatistics.h \
	common/UnderlayConfigurator.h \
	common/NodeVector.h \
	common/RpcListener.h \
	overlay/myoverlay/MyOverlay.h \
	common/BaseRpc.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/Comparator.h
$O/overlay/myoverlay/MyOverlay_m.o: overlay/myoverlay/MyOverlay_m.cc \
	common/BinaryValue.h \
	common/OverlayKey.h \
	common/Vector2D.h \
	common/oversim_mapset.h \
	overlay/myoverlay/MyOverlay_m.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/OverSimMessage_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/overlay/nice/NiceCluster.o: overlay/nice/NiceCluster.cc \
	common/BinaryValue.h \
	common/BaseOverlay.h \
	common/ExtTCPSocketMap.h \
	common/Vector2D.h \
	common/ProxNodeHandle.h \
	common/IterativeLookupConfiguration.h \
	common/RecursiveLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	common/AbstractLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	common/RpcState.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	common/NodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/InitStages.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	overlay/nice/NiceCluster.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	common/OverSimMessage_m.h \
	common/NodeVector.h \
	common/RpcListener.h \
	common/BaseRpc.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/Comparator.h
$O/overlay/nice/NicePeerInfo.o: overlay/nice/NicePeerInfo.cc \
	common/BinaryValue.h \
	common/BaseOverlay.h \
	common/ExtTCPSocketMap.h \
	common/Vector2D.h \
	common/ProxNodeHandle.h \
	common/IterativeLookupConfiguration.h \
	common/RecursiveLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	common/AbstractLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	overlay/nice/NicePeerInfo.h \
	common/RpcState.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	common/NodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/InitStages.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	common/OverSimMessage_m.h \
	common/NodeVector.h \
	common/RpcListener.h \
	common/BaseRpc.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/Comparator.h
$O/overlay/nice/Nice.o: overlay/nice/Nice.cc \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/udp/UDP.h \
	common/Vector2D.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/tcp/TCPSegment.h \
	common/ProxNodeHandle.h \
	common/BaseApp.h \
	common/RecursiveLookup.h \
	overlay/nice/combination.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	common/BootstrapNodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	overlay/nice/NicePeerInfo.h \
	common/RpcMacros.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	overlay/nice/NiceMessage_m.h \
	common/OverSimMessage.h \
	overlay/nice/NiceCluster.h \
	common/RpcListener.h \
	common/ChurnGenerator.h \
	common/BootstrapList.h \
	common/GlobalNodeListAccess.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/UDPControlInfo_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/Comparator.h \
	common/BinaryValue.h \
	common/BaseOverlay.h \
	common/ExtTCPSocketMap.h \
	underlay/simpleunderlay/SimpleNodeEntry.h \
	common/HashFunc.h \
	common/IterativeLookupConfiguration.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	underlay/simpleunderlay/SimpleUDP.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	common/AbstractLookup.h \
	common/RpcState.h \
	common/NodeHandle.h \
	underlay/simpleunderlay/SimpleInfo.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/tcp/TCPSegment_m.h \
	common/OverlayKey.h \
	common/InitStages.h \
	common/oversim_byteswap.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	common/OverSimMessage_m.h \
	common/GlobalStatistics.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/udp/UDPPacket_m.h \
	common/GlobalNodeList.h \
	common/NodeVector.h \
	common/PeerStorage.h \
	common/BaseRpc.h \
	overlay/nice/Nice.h \
	common/TransportAddress.h \
	common/hashWatch.h \
	common/PeerInfo.h
$O/overlay/nice/NiceMessage_m.o: overlay/nice/NiceMessage_m.cc \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	overlay/nice/NiceMessage_m.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/OverSimMessage_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/overlay/ntree/NTreeHelper.o: overlay/ntree/NTreeHelper.cc \
	common/Vector2D.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	overlay/ntree/NTreeHelper.h \
	common/NodeHandle.h
$O/overlay/ntree/NTree_m.o: overlay/ntree/NTree_m.cc \
	common/BinaryValue.h \
	common/OverlayKey.h \
	common/Vector2D.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/OverSimMessage_m.h \
	overlay/ntree/NTree_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/overlay/ntree/NTree.o: overlay/ntree/NTree.cc \
	common/BaseOverlay.h \
	common/BinaryValue.h \
	common/ExtTCPSocketMap.h \
	common/Vector2D.h \
	common/ProxNodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/NotifierConsts.h \
	common/HashFunc.h \
	common/IterativeLookupConfiguration.h \
	common/BaseApp.h \
	common/RecursiveLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	overlay/ntree/NTreeHelper.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	common/AbstractLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	common/BootstrapNodeHandle.h \
	overlay/ntree/NTree.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcState.h \
	common/RpcMacros.h \
	common/NodeHandle.h \
	common/OverlayKey.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/InitStages.h \
	common/oversim_byteswap.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	common/OverSimMessage_m.h \
	common/GlobalStatistics.h \
	common/RpcListener.h \
	common/NodeVector.h \
	common/ChurnGenerator.h \
	common/GlobalNodeList.h \
	common/PeerStorage.h \
	common/BootstrapList.h \
	overlay/ntree/NTree_m.h \
	common/BaseRpc.h \
	common/GlobalNodeListAccess.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/PeerInfo.h \
	common/Comparator.h
$O/overlay/pastry/PastryNeighborhoodSet.o: overlay/pastry/PastryNeighborhoodSet.cc \
	common/BinaryValue.h \
	common/OverlayKey.h \
	common/Vector2D.h \
	overlay/pastry/PastryStateObject.h \
	common/oversim_mapset.h \
	common/ProxNodeHandle.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/OverSimMessage_m.h \
	common/NodeVector.h \
	overlay/pastry/PastryTypes.h \
	overlay/pastry/PastryNeighborhoodSet.h \
	overlay/pastry/PastryMessage_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/Comparator.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/overlay/pastry/PastryRoutingTable.o: overlay/pastry/PastryRoutingTable.cc \
	common/BinaryValue.h \
	overlay/pastry/PastryRoutingTable.h \
	common/Vector2D.h \
	common/OverlayKey.h \
	overlay/pastry/PastryStateObject.h \
	common/oversim_mapset.h \
	common/ProxNodeHandle.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/OverSimMessage_m.h \
	common/NodeVector.h \
	overlay/pastry/PastryTypes.h \
	overlay/pastry/PastryMessage_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/Comparator.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/overlay/pastry/BasePastry.o: overlay/pastry/BasePastry.cc \
	common/cbr/simplex.h \
	common/Vector2D.h \
	common/GlobalStatisticsAccess.h \
	common/ProxNodeHandle.h \
	common/BaseApp.h \
	common/RecursiveLookup.h \
	common/CoordinateSystem.h \
	overlay/pastry/PastryNeighborhoodSet.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/InterfaceToken.h \
	overlay/pastry/BasePastry.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	common/BootstrapNodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	common/RpcListener.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/ipv4/IPv4InterfaceData.h \
	overlay/pastry/PastryTypes.h \
	common/BootstrapList.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/Comparator.h \
	common/SimpleNcs.h \
	common/cbr/yang.h \
	common/BaseOverlay.h \
	common/BinaryValue.h \
	common/ExtTCPSocketMap.h \
	overlay/pastry/PastryRoutingTable.h \
	overlay/pastry/PastryStateObject.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/NotifierConsts.h \
	common/Nps_m.h \
	common/HashFunc.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/IInterfaceTable.h \
	common/IterativeLookupConfiguration.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	common/AbstractLookup.h \
	common/RpcState.h \
	$(OMNET_EXTENSION_MASTER_PROJ)/include/DeleteSafeDefs.h \
	common/NodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/linklayer/contract/MACAddress.h \
	common/OverlayKey.h \
	common/InitStages.h \
	common/oversim_byteswap.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	common/OverSimMessage_m.h \
	common/GlobalStatistics.h \
	common/Vivaldi.h \
	common/NodeVector.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	overlay/pastry/PastryLeafSet.h \
	overlay/pastry/PastryMessage_m.h \
	common/BaseRpc.h \
	common/Nps.h \
	common/NeighborCache.h \
	common/SVivaldi.h \
	common/TransportAddress.h
$O/overlay/pastry/PastryStateObject.o: overlay/pastry/PastryStateObject.cc \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/OverlayKey.h \
	overlay/pastry/PastryStateObject.h \
	common/oversim_mapset.h \
	common/ProxNodeHandle.h \
	common/InitStages.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/OverSimMessage_m.h \
	common/NodeVector.h \
	overlay/pastry/PastryTypes.h \
	overlay/pastry/PastryMessage_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/Comparator.h \
	common/NodeHandle.h
$O/overlay/pastry/Pastry.o: overlay/pastry/Pastry.cc \
	common/cbr/simplex.h \
	common/Vector2D.h \
	common/GlobalStatisticsAccess.h \
	common/ProxNodeHandle.h \
	common/BaseApp.h \
	common/RecursiveLookup.h \
	common/CoordinateSystem.h \
	overlay/pastry/Pastry.h \
	overlay/pastry/PastryNeighborhoodSet.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/InterfaceEntry.h \
	overlay/pastry/BasePastry.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	common/RpcListener.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/ipv4/IPv4InterfaceData.h \
	overlay/pastry/PastryTypes.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/Comparator.h \
	common/SimpleNcs.h \
	common/cbr/yang.h \
	common/BaseOverlay.h \
	common/BinaryValue.h \
	common/ExtTCPSocketMap.h \
	overlay/pastry/PastryRoutingTable.h \
	overlay/pastry/PastryStateObject.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/NotifierConsts.h \
	common/HashFunc.h \
	common/Nps_m.h \
	common/IterativeLookupConfiguration.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	common/AbstractLookup.h \
	common/RpcState.h \
	$(OMNET_EXTENSION_MASTER_PROJ)/include/DeleteSafeDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/linklayer/contract/MACAddress.h \
	common/NodeHandle.h \
	common/OverlayKey.h \
	common/InitStages.h \
	common/oversim_byteswap.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	common/OverSimMessage_m.h \
	common/GlobalStatistics.h \
	common/Vivaldi.h \
	common/NodeVector.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	overlay/pastry/PastryLeafSet.h \
	overlay/pastry/PastryMessage_m.h \
	common/Nps.h \
	common/BaseRpc.h \
	common/NeighborCache.h \
	common/SVivaldi.h \
	common/TransportAddress.h
$O/overlay/pastry/PastryMessage_m.o: overlay/pastry/PastryMessage_m.cc \
	common/BinaryValue.h \
	common/OverlayKey.h \
	common/Vector2D.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/OverSimMessage_m.h \
	overlay/pastry/PastryMessage_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/overlay/pastry/PastryLeafSet.o: overlay/pastry/PastryLeafSet.cc \
	common/cbr/simplex.h \
	common/Vector2D.h \
	common/ProxNodeHandle.h \
	common/GlobalStatisticsAccess.h \
	common/BaseApp.h \
	common/RecursiveLookup.h \
	common/CoordinateSystem.h \
	overlay/pastry/PastryNeighborhoodSet.h \
	overlay/pastry/BasePastry.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	common/RpcListener.h \
	overlay/pastry/PastryTypes.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/Comparator.h \
	common/SimpleNcs.h \
	common/cbr/yang.h \
	common/BinaryValue.h \
	common/BaseOverlay.h \
	common/ExtTCPSocketMap.h \
	overlay/pastry/PastryRoutingTable.h \
	overlay/pastry/PastryStateObject.h \
	common/Nps_m.h \
	common/HashFunc.h \
	common/IterativeLookupConfiguration.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	common/AbstractLookup.h \
	common/RpcState.h \
	common/NodeHandle.h \
	common/OverlayKey.h \
	common/InitStages.h \
	common/oversim_byteswap.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	common/GlobalStatistics.h \
	common/OverSimMessage_m.h \
	common/Vivaldi.h \
	common/NodeVector.h \
	overlay/pastry/PastryLeafSet.h \
	overlay/pastry/PastryMessage_m.h \
	common/Nps.h \
	common/BaseRpc.h \
	common/NeighborCache.h \
	common/SVivaldi.h \
	common/TransportAddress.h
$O/overlay/pubsubmmog/PubSubSubspace.o: overlay/pubsubmmog/PubSubSubspace.cc \
	common/BinaryValue.h \
	overlay/pubsubmmog/PubSubSubspace.h \
	common/OverlayKey.h \
	common/Vector2D.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	overlay/pubsubmmog/PubSubMessage_m.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/OverSimMessage_m.h \
	overlay/pubsubmmog/PubSubSubspaceId.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/overlay/pubsubmmog/PubSubLobby.o: overlay/pubsubmmog/PubSubLobby.cc \
	common/BinaryValue.h \
	common/BaseOverlay.h \
	common/ExtTCPSocketMap.h \
	common/Vector2D.h \
	overlay/pubsubmmog/PubSubSubspace.h \
	common/ProxNodeHandle.h \
	common/HashFunc.h \
	common/IterativeLookupConfiguration.h \
	overlay/pubsubmmog/PubSubMessage_m.h \
	common/RecursiveLookup.h \
	overlay/pubsubmmog/PubSubLobby.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseTcpSupport.h \
	overlay/pubsubmmog/PubSubSubspaceId.h \
	common/TopologyVis.h \
	common/AbstractLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	common/RpcState.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	common/NodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/InitStages.h \
	common/oversim_byteswap.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	common/OverSimMessage_m.h \
	common/GlobalStatistics.h \
	common/ChurnGenerator.h \
	common/NodeVector.h \
	common/RpcListener.h \
	common/GlobalNodeList.h \
	common/PeerStorage.h \
	common/BaseRpc.h \
	common/GlobalNodeListAccess.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/PeerInfo.h \
	common/Comparator.h
$O/overlay/pubsubmmog/PubSubMessage_m.o: overlay/pubsubmmog/PubSubMessage_m.cc \
	common/BinaryValue.h \
	common/OverlayKey.h \
	common/Vector2D.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	overlay/pubsubmmog/PubSubMessage_m.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/OverSimMessage_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/overlay/pubsubmmog/PubSubSubspaceId.o: overlay/pubsubmmog/PubSubSubspaceId.cc \
	overlay/pubsubmmog/PubSubSubspaceId.h
$O/overlay/pubsubmmog/PubSubMMOG.o: overlay/pubsubmmog/PubSubMMOG.cc \
	common/BinaryValue.h \
	common/BaseOverlay.h \
	common/ExtTCPSocketMap.h \
	common/Vector2D.h \
	overlay/pubsubmmog/PubSubSubspace.h \
	common/ProxNodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/NotifierConsts.h \
	common/HashFunc.h \
	common/BaseApp.h \
	common/IterativeLookupConfiguration.h \
	common/RecursiveLookup.h \
	overlay/pubsubmmog/PubSubMessage_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	overlay/pubsubmmog/PubSubSubspaceId.h \
	common/AbstractLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	common/BootstrapNodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcState.h \
	common/RpcMacros.h \
	common/NodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/InitStages.h \
	common/oversim_byteswap.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	common/OverSimMessage_m.h \
	common/GlobalStatistics.h \
	common/ChurnGenerator.h \
	common/RpcListener.h \
	common/NodeVector.h \
	common/GlobalNodeList.h \
	common/PeerStorage.h \
	common/BootstrapList.h \
	common/BaseRpc.h \
	common/GlobalNodeListAccess.h \
	overlay/pubsubmmog/PubSubMMOG.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/PeerInfo.h \
	common/Comparator.h
$O/overlay/quon/QuonHelper.o: overlay/quon/QuonHelper.cc \
	common/Vector2D.h \
	common/OverlayKey.h \
	overlay/quon/QuonDefs.h \
	common/oversim_mapset.h \
	overlay/quon/QuonHelper.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/overlay/quon/ConnectivityProbeQuon.o: overlay/quon/ConnectivityProbeQuon.cc \
	common/BaseOverlay.h \
	common/BinaryValue.h \
	common/ExtTCPSocketMap.h \
	common/Vector2D.h \
	common/GlobalStatisticsAccess.h \
	common/ProxNodeHandle.h \
	common/HashFunc.h \
	common/IterativeLookupConfiguration.h \
	common/RecursiveLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	overlay/quon/QuonHelper.h \
	overlay/quon/ConnectivityProbeQuon.h \
	common/AbstractLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcState.h \
	common/RpcMacros.h \
	common/NodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	overlay/quon/QuonDefs.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/InitStages.h \
	common/oversim_byteswap.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	common/OverSimMessage_m.h \
	common/GlobalStatistics.h \
	common/ChurnGenerator.h \
	common/NodeVector.h \
	common/RpcListener.h \
	common/GlobalNodeList.h \
	common/PeerStorage.h \
	overlay/quon/Quon.h \
	common/BaseRpc.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/PeerInfo.h \
	common/Comparator.h \
	overlay/quon/Quon_m.h
$O/overlay/quon/Quon.o: overlay/quon/Quon.cc \
	common/BaseOverlay.h \
	common/BinaryValue.h \
	common/ExtTCPSocketMap.h \
	common/Vector2D.h \
	common/ProxNodeHandle.h \
	common/HashFunc.h \
	common/BaseApp.h \
	common/IterativeLookupConfiguration.h \
	common/RecursiveLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	common/AbstractLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	overlay/quon/QuonHelper.h \
	common/BootstrapNodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcState.h \
	common/RpcMacros.h \
	common/NodeHandle.h \
	overlay/quon/QuonDefs.h \
	common/OverlayKey.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/InitStages.h \
	common/oversim_byteswap.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	common/OverSimMessage_m.h \
	common/GlobalStatistics.h \
	common/ChurnGenerator.h \
	common/RpcListener.h \
	common/NodeVector.h \
	common/GlobalNodeList.h \
	common/PeerStorage.h \
	common/BootstrapList.h \
	overlay/quon/Quon.h \
	common/BaseRpc.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/PeerInfo.h \
	common/Comparator.h \
	overlay/quon/Quon_m.h
$O/overlay/quon/Quon_m.o: overlay/quon/Quon_m.cc \
	common/BinaryValue.h \
	overlay/quon/QuonDefs.h \
	common/OverlayKey.h \
	common/Vector2D.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/OverSimMessage_m.h \
	overlay/quon/QuonHelper.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	overlay/quon/Quon_m.h \
	common/NodeHandle.h
$O/overlay/vast/Vast.o: overlay/vast/Vast.cc \
	common/BinaryValue.h \
	common/BaseOverlay.h \
	common/ExtTCPSocketMap.h \
	common/Vector2D.h \
	common/ProxNodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/NotifierConsts.h \
	common/HashFunc.h \
	common/BaseApp.h \
	common/IterativeLookupConfiguration.h \
	common/RecursiveLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	overlay/vast/Vast_m.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	common/AbstractLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	common/BootstrapNodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcState.h \
	common/RpcMacros.h \
	common/NodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	overlay/vast/VastDefs.h \
	common/CommonMessages_m.h \
	common/InitStages.h \
	common/oversim_byteswap.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	common/OverSimMessage_m.h \
	common/GlobalStatistics.h \
	common/RpcListener.h \
	common/ChurnGenerator.h \
	common/GlobalNodeList.h \
	common/NodeVector.h \
	common/PeerStorage.h \
	common/BootstrapList.h \
	common/BaseRpc.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/PeerInfo.h \
	common/Comparator.h \
	overlay/vast/Vast.h
$O/overlay/vast/VastDefs.o: overlay/vast/VastDefs.cc \
	common/OverlayKey.h \
	common/Vector2D.h \
	common/oversim_mapset.h \
	overlay/vast/VastDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/overlay/vast/Vast_m.o: overlay/vast/Vast_m.cc \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/OverSimMessage_m.h \
	overlay/vast/Vast_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/overlay/vast/ConnectivityProbe.o: overlay/vast/ConnectivityProbe.cc \
	common/BinaryValue.h \
	common/BaseOverlay.h \
	common/ExtTCPSocketMap.h \
	common/Vector2D.h \
	overlay/vast/ConnectivityProbe.h \
	common/ProxNodeHandle.h \
	common/GlobalStatisticsAccess.h \
	common/IterativeLookupConfiguration.h \
	common/RecursiveLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	overlay/vast/Vast_m.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	common/AbstractLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	common/RpcState.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	common/NodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	overlay/vast/VastDefs.h \
	common/InitStages.h \
	common/CommonMessages_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	common/OverSimMessage.h \
	common/OverSimMessage_m.h \
	common/GlobalStatistics.h \
	common/RpcListener.h \
	common/NodeVector.h \
	common/BaseRpc.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/Comparator.h \
	overlay/vast/Vast.h
$O/tier2/dhttestapp/GlobalDhtTestMap.o: tier2/dhttestapp/GlobalDhtTestMap.cc \
	common/BinaryValue.h \
	common/OverlayKey.h \
	common/GlobalStatisticsAccess.h \
	common/GlobalStatistics.h \
	tier2/dhttestapp/DHTTestAppMessages_m.h \
	tier2/dhttestapp/GlobalDhtTestMap.h
$O/tier2/dhttestapp/DHTTestApp.o: tier2/dhttestapp/DHTTestApp.cc \
	common/BaseOverlay.h \
	common/BinaryValue.h \
	common/ExtTCPSocketMap.h \
	common/Vector2D.h \
	common/ProxNodeHandle.h \
	common/GlobalStatisticsAccess.h \
	common/HashFunc.h \
	common/IterativeLookupConfiguration.h \
	common/BaseApp.h \
	common/RecursiveLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	common/AbstractLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	common/RpcState.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	common/NodeHandle.h \
	tier2/dhttestapp/DHTTestApp.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/InitStages.h \
	common/oversim_byteswap.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	common/OverSimMessage.h \
	common/OverSimMessage_m.h \
	common/GlobalStatistics.h \
	common/UnderlayConfigurator.h \
	tier2/dhttestapp/GlobalDhtTestMap.h \
	common/RpcListener.h \
	common/ChurnGenerator.h \
	common/NodeVector.h \
	common/GlobalNodeList.h \
	common/PeerStorage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/UnderlayConfiguratorAccess.h \
	common/GlobalNodeListAccess.h \
	common/BaseRpc.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/PeerInfo.h \
	common/Comparator.h
$O/tier2/dhttestapp/DHTTestAppMessages_m.o: tier2/dhttestapp/DHTTestAppMessages_m.cc \
	common/OverlayKey.h \
	tier2/dhttestapp/DHTTestAppMessages_m.h
$O/tier2/p2pns/P2pnsMessage_m.o: tier2/p2pns/P2pnsMessage_m.cc \
	common/BinaryValue.h \
	common/Vector2D.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/OverSimMessage_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	tier2/p2pns/P2pnsMessage_m.h \
	common/NodeHandle.h
$O/tier2/p2pns/P2pns.o: tier2/p2pns/P2pns.cc \
	common/Vector2D.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcServer.h \
	common/ProxNodeHandle.h \
	common/BaseApp.h \
	common/RecursiveLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	applications/dht/DHTMessage_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	tier3/xmlrpcinterface/XmlRpcInterface.h \
	underlay/singlehostunderlay/tunoutscheduler.h \
	common/OverSimMessage.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcServerMethod.h \
	common/RpcListener.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/Comparator.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcUtil.h \
	tier2/p2pns/P2pnsCache.h \
	common/BinaryValue.h \
	common/BaseOverlay.h \
	common/ExtTCPSocketMap.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcException.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpc.h \
	common/IterativeLookupConfiguration.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcValue.h \
	common/BaseTcpSupport.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcDispatch.h \
	common/TopologyVis.h \
	underlay/singlehostunderlay/realtimescheduler.h \
	common/AbstractLookup.h \
	common/RpcState.h \
	tier2/p2pns/P2pnsMessage_m.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcClient.h \
	common/NodeHandle.h \
	common/OverlayKey.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcSource.h \
	common/InitStages.h \
	tier2/p2pns/P2pns.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	common/OverSimMessage_m.h \
	common/NodeVector.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/BaseRpc.h \
	common/TransportAddress.h \
	common/SHA1.h
$O/tier2/p2pns/P2pnsCache.o: tier2/p2pns/P2pnsCache.cc \
	common/BinaryValue.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/InitStages.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h \
	tier2/p2pns/P2pnsCache.h
$O/tier2/simmud/SimMud_m.o: tier2/simmud/SimMud_m.cc \
	common/BinaryValue.h \
	tier2/simmud/SimMud_m.h \
	common/Vector2D.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/OverSimMessage_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/NodeHandle.h
$O/tier2/simmud/SimMud.o: tier2/simmud/SimMud.cc \
	common/BaseOverlay.h \
	common/BinaryValue.h \
	tier2/simmud/SimMud_m.h \
	common/ExtTCPSocketMap.h \
	common/Vector2D.h \
	common/ProxNodeHandle.h \
	common/BaseApp.h \
	common/IterativeLookupConfiguration.h \
	common/RecursiveLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	common/AbstractLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	tier2/simmud/SimMud.h \
	applications/scribe/ScribeGroup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcState.h \
	applications/scribe/ScribeMessage_m.h \
	common/RpcMacros.h \
	common/NodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/InitStages.h \
	common/CommonMessages_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	common/OverSimMessage.h \
	common/OverSimMessage_m.h \
	common/GlobalStatistics.h \
	common/RpcListener.h \
	common/NodeVector.h \
	common/BaseRpc.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/Comparator.h
$O/tier3/xmlrpcinterface/XmlRpcInterface.o: tier3/xmlrpcinterface/XmlRpcInterface.cc \
	common/Vector2D.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcServer.h \
	common/ProxNodeHandle.h \
	common/BaseApp.h \
	common/RecursiveLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	applications/dht/DHTMessage_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcMacros.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	tier3/xmlrpcinterface/XmlRpcInterface.h \
	underlay/singlehostunderlay/tunoutscheduler.h \
	common/OverSimMessage.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcServerMethod.h \
	common/RpcListener.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/Comparator.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcUtil.h \
	tier2/p2pns/P2pnsCache.h \
	common/BinaryValue.h \
	common/BaseOverlay.h \
	common/ExtTCPSocketMap.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcException.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpc.h \
	common/IterativeLookupConfiguration.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcValue.h \
	common/BaseTcpSupport.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcDispatch.h \
	common/TopologyVis.h \
	underlay/singlehostunderlay/realtimescheduler.h \
	common/AbstractLookup.h \
	common/RpcState.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcClient.h \
	common/NodeHandle.h \
	common/OverlayKey.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcSource.h \
	common/InitStages.h \
	tier2/p2pns/P2pns.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	common/OverSimMessage_m.h \
	common/NodeVector.h \
	common/BaseRpc.h \
	common/SHA1.h \
	common/TransportAddress.h
$O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcSource.o: tier3/xmlrpcinterface/xmlrpc++/XmlRpcSource.cc \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcSource.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcSocket.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcUtil.h
$O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcUtil.o: tier3/xmlrpcinterface/xmlrpc++/XmlRpcUtil.cc \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcDispatch.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcServer.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcSource.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcException.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpc.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcValue.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcClient.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcUtil.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcServerMethod.h
$O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcDispatch.o: tier3/xmlrpcinterface/xmlrpc++/XmlRpcDispatch.cc \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcDispatch.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcSource.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcUtil.h
$O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcThread.o: tier3/xmlrpcinterface/xmlrpc++/XmlRpcThread.cc \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcThread.h
$O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcMutex.o: tier3/xmlrpcinterface/xmlrpc++/XmlRpcMutex.cc \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcMutex.h
$O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcClient.o: tier3/xmlrpcinterface/xmlrpc++/XmlRpcClient.cc \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcDispatch.h \
	tier3/xmlrpcinterface/xmlrpc++/base64.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcServer.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcSource.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcException.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpc.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcSocket.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcValue.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcUtil.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcClient.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcServerMethod.h
$O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcValue.o: tier3/xmlrpcinterface/xmlrpc++/XmlRpcValue.cc \
	tier3/xmlrpcinterface/xmlrpc++/base64.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcException.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcValue.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcUtil.h
$O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcServerConnection.o: tier3/xmlrpcinterface/xmlrpc++/XmlRpcServerConnection.cc \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcDispatch.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcServer.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcSource.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcSocket.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcValue.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcServerConnection.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcUtil.h
$O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcServer.o: tier3/xmlrpcinterface/xmlrpc++/XmlRpcServer.cc \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcDispatch.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcServer.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcSource.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcException.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpc.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcSocket.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcValue.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcServerConnection.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcClient.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcUtil.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcServerMethod.h
$O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcServerMethod.o: tier3/xmlrpcinterface/xmlrpc++/XmlRpcServerMethod.cc \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcDispatch.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcServer.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcSource.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcServerMethod.h
$O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcSocket.o: tier3/xmlrpcinterface/xmlrpc++/XmlRpcSocket.cc \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcSocket.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcUtil.h
$O/tier3/xmlrpcinterface/xmlrpc++/XmlRpcThreadedServer.o: tier3/xmlrpcinterface/xmlrpc++/XmlRpcThreadedServer.cc \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcMutex.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcDispatch.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcServer.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcSource.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcThreadedServer.h \
	tier3/xmlrpcinterface/xmlrpc++/XmlRpcThread.h
$O/underlay/inetunderlay/InetUnderlayConfigurator.o: underlay/inetunderlay/InetUnderlayConfigurator.cc \
	common/BinaryValue.h \
	underlay/inetunderlay/AccessNet.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/NotifierConsts.h \
	common/HashFunc.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/NotificationBoard.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/InterfaceEntry.h \
	underlay/inetunderlay/InetUnderlayConfigurator.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	underlay/inetunderlay/InetInfo.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/ipv6/IPv6InterfaceData.h \
	$(OMNET_EXTENSION_MASTER_PROJ)/include/DeleteSafeDefs.h \
	common/NodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/ipv6/RoutingTable6.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/ipv4/IPRoute.h \
	common/InitStages.h \
	common/oversim_byteswap.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	common/UnderlayConfigurator.h \
	common/ChurnGenerator.h \
	common/GlobalNodeList.h \
	common/PeerStorage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/ipv4/IPv4InterfaceData.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/PeerInfo.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/ModuleAccess.h \
	common/StringConvert.h
$O/underlay/inetunderlay/InetInfo.o: underlay/inetunderlay/InetInfo.cc \
	underlay/inetunderlay/InetInfo.h \
	common/PeerInfo.h
$O/underlay/inetunderlay/AccessNet.o: underlay/inetunderlay/AccessNet.cc \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/ipv6/RoutingTable6.h \
	underlay/inetunderlay/AccessNet.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/ipv4/IPRoute.h \
	common/InitStages.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/NotifierConsts.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/NotificationBoard.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/ipv4/IPv4InterfaceData.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/ModuleAccess.h \
	$(OMNET_EXTENSION_MASTER_PROJ)/include/DeleteSafeDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/ipv6/IPv6InterfaceData.h \
	$(INET_OVERSIM_20101019_PROJ)/src/linklayer/contract/MACAddress.h
$O/underlay/reaseunderlay/ReaSEInfo.o: underlay/reaseunderlay/ReaSEInfo.cc \
	underlay/reaseunderlay/ReaSEInfo.h \
	common/PeerInfo.h
$O/underlay/reaseunderlay/ConnectReaSE.o: underlay/reaseunderlay/ConnectReaSE.cc \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/ipv4/IPv4InterfaceData.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/InterfaceEntry.h \
	underlay/reaseunderlay/ConnectReaSE.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/ipv4/IPRoute.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/NotifierConsts.h \
	common/InitStages.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	$(OMNET_EXTENSION_MASTER_PROJ)/include/DeleteSafeDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/linklayer/contract/MACAddress.h
$O/underlay/reaseunderlay/RUNetworkConfigurator.o: underlay/reaseunderlay/RUNetworkConfigurator.cc \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/ipv4/IPRoute.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/ipv4/RoutingTable.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/NotifierConsts.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/autorouting/NetworkConfigurator.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/NotificationBoard.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/ipv4/IPv4InterfaceData.h \
	underlay/reaseunderlay/RUNetworkConfigurator.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/ModuleAccess.h \
	$(OMNET_EXTENSION_MASTER_PROJ)/include/DeleteSafeDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/InterfaceTable.h \
	$(INET_OVERSIM_20101019_PROJ)/src/linklayer/contract/MACAddress.h
$O/underlay/reaseunderlay/ReaSEUnderlayConfigurator.o: underlay/reaseunderlay/ReaSEUnderlayConfigurator.cc \
	common/BinaryValue.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/NotifierConsts.h \
	common/HashFunc.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/NotificationBoard.h \
	underlay/reaseunderlay/ReaSEUnderlayConfigurator.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/InterfaceEntry.h \
	underlay/reaseunderlay/ConnectReaSE.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	underlay/reaseunderlay/ReaSEInfo.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	$(OMNET_EXTENSION_MASTER_PROJ)/include/DeleteSafeDefs.h \
	common/NodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/linklayer/contract/MACAddress.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/ipv4/IPRoute.h \
	common/InitStages.h \
	common/oversim_byteswap.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	common/UnderlayConfigurator.h \
	common/ChurnGenerator.h \
	common/GlobalNodeList.h \
	common/PeerStorage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/ipv4/IPv4InterfaceData.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/PeerInfo.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/ModuleAccess.h \
	common/StringConvert.h
$O/underlay/simpleunderlay/SimpleInfo.o: underlay/simpleunderlay/SimpleInfo.cc \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/tcp/TCPSegment_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/tcp/TCPSegment.h \
	underlay/simpleunderlay/SimpleNodeEntry.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/PeerInfo.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/udp/UDPPacket_m.h \
	underlay/simpleunderlay/SimpleInfo.h
$O/underlay/simpleunderlay/SimpleUnderlayConfigurator.o: underlay/simpleunderlay/SimpleUnderlayConfigurator.cc \
	common/BinaryValue.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/udp/UDP.h \
	underlay/simpleunderlay/SimpleUnderlayConfigurator.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/tcp/TCPSegment.h \
	underlay/simpleunderlay/SimpleNodeEntry.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/NotifierConsts.h \
	$(OMNET_EXTENSION_MASTER_PROJ)/include/DebugDef.h \
	common/HashFunc.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/NotificationBoard.h \
	underlay/simpleunderlay/SimpleUDP.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/tcp/TCP.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	$(OMNET_EXTENSION_MASTER_PROJ)/include/DeleteSafeDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/ipv6/IPv6InterfaceData.h \
	$(INET_OVERSIM_20101019_PROJ)/src/linklayer/contract/MACAddress.h \
	common/NodeHandle.h \
	underlay/simpleunderlay/SimpleInfo.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/tcp/TCPSegment_m.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/BasicModule.h \
	underlay/simpleunderlay/SimpleTCP.h \
	common/InitStages.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/tcp/TCPConnection.h \
	common/oversim_byteswap.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/udp/UDPPacket_m.h \
	common/UnderlayConfigurator.h \
	common/GlobalNodeList.h \
	common/ChurnGenerator.h \
	common/PeerStorage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/ipv4/IPv4InterfaceData.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/UDPControlInfo_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/PeerInfo.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/ModuleAccess.h \
	common/StringConvert.h
$O/underlay/simpleunderlay/SimpleUDP.o: underlay/simpleunderlay/SimpleUDP.cc \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/udp/UDP.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/udp/UDPPacket.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/tcp/TCPSegment.h \
	common/GlobalStatisticsAccess.h \
	underlay/simpleunderlay/SimpleNodeEntry.h \
	common/HashFunc.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	underlay/simpleunderlay/SimpleUDP.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6ControlInfo.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPControlInfo.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/ipv6/IPv6Datagram_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	underlay/simpleunderlay/SimpleInfo.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPControlInfo_m.h \
	common/NodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/tcp/TCPSegment_m.h \
	common/OverlayKey.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6ControlInfo_m.h \
	common/oversim_mapset.h \
	common/InitStages.h \
	common/CommonMessages_m.h \
	common/oversim_byteswap.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/ipv4/IPDatagram_m.h \
	common/OverSimMessage_m.h \
	common/GlobalStatistics.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/udp/UDPPacket_m.h \
	common/ChurnGenerator.h \
	common/GlobalNodeList.h \
	common/PeerStorage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/UDPControlInfo_m.h \
	common/GlobalNodeListAccess.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/PeerInfo.h
$O/underlay/simpleunderlay/SimpleNodeEntry.o: underlay/simpleunderlay/SimpleNodeEntry.cc \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/udp/UDP.h \
	common/BinaryValue.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/tcp/TCPSegment_m.h \
	common/OverlayKey.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/tcp/TCPSegment.h \
	underlay/simpleunderlay/SimpleNodeEntry.h \
	underlay/simpleunderlay/SimpleTCP.h \
	common/InitStages.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/tcp/TCPConnection.h \
	$(OMNET_EXTENSION_MASTER_PROJ)/include/DebugDef.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	underlay/simpleunderlay/SimpleUDP.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/udp/UDPPacket_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/tcp/TCP.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/UDPControlInfo_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/SHA1.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h
$O/underlay/simpleunderlay/SimpleTCP.o: underlay/simpleunderlay/SimpleTCP.cc \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/udp/UDP.h \
	common/BinaryValue.h \
	common/Vector2D.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/tcp/TCPSegment.h \
	common/GlobalStatisticsAccess.h \
	underlay/simpleunderlay/SimpleNodeEntry.h \
	common/HashFunc.h \
	$(OMNET_EXTENSION_MASTER_PROJ)/include/DebugDef.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	underlay/simpleunderlay/SimpleUDP.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/tcp/TCPAlgorithm.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/tcp/TCP.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6ControlInfo.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPControlInfo.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/tcp/TCPSendQueue.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPControlInfo_m.h \
	common/NodeHandle.h \
	underlay/simpleunderlay/SimpleInfo.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6ControlInfo_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/tcp/TCPSegment_m.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/tcp/TCPConnection.h \
	common/InitStages.h \
	underlay/simpleunderlay/SimpleTCP.h \
	common/CommonMessages_m.h \
	common/oversim_byteswap.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/ipv4/IPDatagram_m.h \
	common/OverSimMessage_m.h \
	common/GlobalStatistics.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/udp/UDPPacket_m.h \
	common/ChurnGenerator.h \
	common/GlobalNodeList.h \
	common/PeerStorage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/icmpv6/ICMPv6Message_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/UDPControlInfo_m.h \
	common/GlobalNodeListAccess.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/PeerInfo.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/tcp/TCPSACKRexmitQueue.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/tcp/TCPReceiveQueue.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h
$O/underlay/singlehostunderlay/tunoutscheduler.o: underlay/singlehostunderlay/tunoutscheduler.cc \
	underlay/singlehostunderlay/realtimescheduler.h \
	underlay/singlehostunderlay/tunoutscheduler.h
$O/underlay/singlehostunderlay/apptunoutscheduler.o: underlay/singlehostunderlay/apptunoutscheduler.cc \
	underlay/singlehostunderlay/realtimescheduler.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	underlay/singlehostunderlay/apptunoutscheduler.h
$O/underlay/singlehostunderlay/RealworldConnector.o: underlay/singlehostunderlay/RealworldConnector.cc \
	underlay/singlehostunderlay/realtimescheduler.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	common/PacketParser.h \
	underlay/singlehostunderlay/RealworldConnector.h
$O/underlay/singlehostunderlay/RealworldApp.o: underlay/singlehostunderlay/RealworldApp.cc \
	underlay/singlehostunderlay/realtimescheduler.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	underlay/singlehostunderlay/tunoutscheduler.h \
	underlay/singlehostunderlay/RealworldApp.h \
	common/PacketParser.h \
	underlay/singlehostunderlay/RealworldConnector.h
$O/underlay/singlehostunderlay/TunOutDevice.o: underlay/singlehostunderlay/TunOutDevice.cc \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/udp/UDPPacket.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/NotifierConsts.h \
	underlay/singlehostunderlay/tunoutscheduler.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/ipv4/IPDatagram_m.h \
	underlay/singlehostunderlay/TunOutDevice.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/udp/UDPPacket_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/InterfaceTableAccess.h \
	underlay/singlehostunderlay/RealworldDevice.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/InterfaceToken.h \
	underlay/singlehostunderlay/realtimescheduler.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/ModuleAccess.h \
	$(OMNET_EXTENSION_MASTER_PROJ)/include/DeleteSafeDefs.h \
	common/PacketParser.h \
	$(INET_OVERSIM_20101019_PROJ)/src/linklayer/contract/MACAddress.h \
	underlay/singlehostunderlay/RealworldConnector.h
$O/underlay/singlehostunderlay/udpoutscheduler.o: underlay/singlehostunderlay/udpoutscheduler.cc \
	underlay/singlehostunderlay/realtimescheduler.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	underlay/singlehostunderlay/udpoutscheduler.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h
$O/underlay/singlehostunderlay/UdpOutDevice.o: underlay/singlehostunderlay/UdpOutDevice.cc \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/udp/UDPPacket.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/NotifierConsts.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/IInterfaceTable.h \
	underlay/singlehostunderlay/tunoutscheduler.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/ipv4/IPDatagram_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/udp/UDPPacket_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/InterfaceTableAccess.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	underlay/singlehostunderlay/RealworldDevice.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/InterfaceEntry.h \
	underlay/singlehostunderlay/realtimescheduler.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	underlay/singlehostunderlay/UdpOutDevice.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/ModuleAccess.h \
	$(OMNET_EXTENSION_MASTER_PROJ)/include/DeleteSafeDefs.h \
	underlay/singlehostunderlay/RealworldConnector.h \
	$(INET_OVERSIM_20101019_PROJ)/src/linklayer/contract/MACAddress.h \
	common/PacketParser.h
$O/underlay/singlehostunderlay/SingleHostUnderlayConfigurator.o: underlay/singlehostunderlay/SingleHostUnderlayConfigurator.cc \
	common/BinaryValue.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/NotifierConsts.h \
	common/HashFunc.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/NotificationBoard.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	underlay/singlehostunderlay/stun/stun_udp.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	$(OMNET_EXTENSION_MASTER_PROJ)/include/DeleteSafeDefs.h \
	underlay/singlehostunderlay/SingleHostUnderlayConfigurator.h \
	common/NodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/linklayer/contract/MACAddress.h \
	common/OverlayKey.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/BasicModule.h \
	common/oversim_mapset.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/ipv4/IPRoute.h \
	common/InitStages.h \
	common/oversim_byteswap.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	common/UnderlayConfigurator.h \
	common/ChurnGenerator.h \
	common/GlobalNodeList.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/ipv4/IPv4InterfaceData.h \
	common/PeerStorage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddressResolver.h \
	common/GlobalNodeListAccess.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	underlay/singlehostunderlay/stun/stun.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	common/TransportAddress.h \
	common/PeerInfo.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/ModuleAccess.h
$O/underlay/singlehostunderlay/RealworldDevice.o: underlay/singlehostunderlay/RealworldDevice.cc \
	$(INET_OVERSIM_20101019_PROJ)/src/base/NotifierConsts.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/InterfaceTableAccess.h \
	underlay/singlehostunderlay/RealworldDevice.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/common/InterfaceToken.h \
	underlay/singlehostunderlay/realtimescheduler.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/ModuleAccess.h \
	$(OMNET_EXTENSION_MASTER_PROJ)/include/DeleteSafeDefs.h \
	underlay/singlehostunderlay/RealworldConnector.h \
	common/PacketParser.h \
	$(INET_OVERSIM_20101019_PROJ)/src/linklayer/contract/MACAddress.h
$O/underlay/singlehostunderlay/realtimescheduler.o: underlay/singlehostunderlay/realtimescheduler.cc \
	underlay/singlehostunderlay/realtimescheduler.h
$O/underlay/singlehostunderlay/ZeroconfConnector.o: underlay/singlehostunderlay/ZeroconfConnector.cc \
	common/BaseOverlay.h \
	common/BinaryValue.h \
	common/ExtTCPSocketMap.h \
	common/Vector2D.h \
	common/ProxNodeHandle.h \
	common/HashFunc.h \
	common/IterativeLookupConfiguration.h \
	common/BaseApp.h \
	common/RecursiveLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPv6Address.h \
	common/BaseTcpSupport.h \
	common/TopologyVis.h \
	common/AbstractLookup.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INotifiable.h \
	common/BootstrapNodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPAddress.h \
	common/RpcState.h \
	common/RpcMacros.h \
	common/NodeHandle.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocketMap.h \
	common/OverlayKey.h \
	common/oversim_mapset.h \
	common/CommonMessages_m.h \
	common/InitStages.h \
	common/oversim_byteswap.h \
	common/OverSimMessage.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPSocket.h \
	$(INET_OVERSIM_20101019_PROJ)/src/transport/contract/TCPCommand_m.h \
	common/OverSimMessage_m.h \
	common/RpcListener.h \
	common/NodeVector.h \
	common/ChurnGenerator.h \
	common/GlobalNodeList.h \
	common/PeerStorage.h \
	common/BootstrapList.h \
	common/BaseRpc.h \
	common/GlobalNodeListAccess.h \
	$(INET_OVERSIM_20101019_PROJ)/src/base/INETDefs.h \
	$(INET_OVERSIM_20101019_PROJ)/src/networklayer/contract/IPvXAddress.h \
	underlay/singlehostunderlay/ZeroconfConnector.h \
	common/TransportAddress.h \
	common/PeerInfo.h \
	common/Comparator.h
$O/underlay/singlehostunderlay/stun/stun.o: underlay/singlehostunderlay/stun/stun.cc \
	underlay/singlehostunderlay/stun/stun.h \
	underlay/singlehostunderlay/stun/stun_udp.h
$O/underlay/singlehostunderlay/stun/udp.o: underlay/singlehostunderlay/stun/udp.cc \
	underlay/singlehostunderlay/stun/stun_udp.h

