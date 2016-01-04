//
// Generated file, do not edit! Created by opp_msgc 4.1 from overlay/pastry/PastryMessage.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "PastryMessage_m.h"

// Template rule which fires if a struct or class doesn't have operator<<
template<typename T>
std::ostream& operator<<(std::ostream& out,const T&) {return out;}

// Another default rule (prevents compiler from choosing base class' doPacking())
template<typename T>
void doPacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doPacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}

template<typename T>
void doUnpacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doUnpacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}




EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("PastryMsgType");
    if (!e) enums.getInstance()->add(e = new cEnum("PastryMsgType"));
    e->insert(PASTRY_MSG_STD, "PASTRY_MSG_STD");
    e->insert(PASTRY_MSG_JOIN, "PASTRY_MSG_JOIN");
    e->insert(PASTRY_MSG_STATE, "PASTRY_MSG_STATE");
    e->insert(PASTRY_MSG_REQ, "PASTRY_MSG_REQ");
    e->insert(PASTRY_MSG_LEAFSET, "PASTRY_MSG_LEAFSET");
    e->insert(PASTRY_MSG_ROWREQ, "PASTRY_MSG_ROWREQ");
    e->insert(PASTRY_MSG_RROW, "PASTRY_MSG_RROW");
    e->insert(PASTRY_MSG_LEAFSET_PULL, "PASTRY_MSG_LEAFSET_PULL");
    e->insert(PASTRY_REQ_REPAIR, "PASTRY_REQ_REPAIR");
    e->insert(PASTRY_REQ_STATE, "PASTRY_REQ_STATE");
    e->insert(PASTRY_REQ_LEAFSET, "PASTRY_REQ_LEAFSET");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("PastryStateMsgType");
    if (!e) enums.getInstance()->add(e = new cEnum("PastryStateMsgType"));
    e->insert(PASTRY_STATE_STD, "PASTRY_STATE_STD");
    e->insert(PASTRY_STATE_JOIN, "PASTRY_STATE_JOIN");
    e->insert(PASTRY_STATE_MINJOIN, "PASTRY_STATE_MINJOIN");
    e->insert(PASTRY_STATE_UPDATE, "PASTRY_STATE_UPDATE");
    e->insert(PASTRY_STATE_REPAIR, "PASTRY_STATE_REPAIR");
    e->insert(PASTRY_STATE_JOINUPDATE, "PASTRY_STATE_JOINUPDATE");
);

Register_Class(PastryMessage);

PastryMessage::PastryMessage(const char *name, int kind) : BaseOverlayMessage(name,kind)
{
    this->pastryMsgType_var = PASTRY_MSG_STD;
}

PastryMessage::PastryMessage(const PastryMessage& other) : BaseOverlayMessage()
{
    setName(other.getName());
    operator=(other);
}

PastryMessage::~PastryMessage()
{
}

PastryMessage& PastryMessage::operator=(const PastryMessage& other)
{
    if (this==&other) return *this;
    BaseOverlayMessage::operator=(other);
    this->pastryMsgType_var = other.pastryMsgType_var;
    return *this;
}

void PastryMessage::parsimPack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimPack(b);
    doPacking(b,this->pastryMsgType_var);
}

void PastryMessage::parsimUnpack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimUnpack(b);
    doUnpacking(b,this->pastryMsgType_var);
}

int PastryMessage::getPastryMsgType() const
{
    return pastryMsgType_var;
}

void PastryMessage::setPastryMsgType(int pastryMsgType_var)
{
    this->pastryMsgType_var = pastryMsgType_var;
}

class PastryMessageDescriptor : public cClassDescriptor
{
  public:
    PastryMessageDescriptor();
    virtual ~PastryMessageDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(PastryMessageDescriptor);

PastryMessageDescriptor::PastryMessageDescriptor() : cClassDescriptor("PastryMessage", "BaseOverlayMessage")
{
}

PastryMessageDescriptor::~PastryMessageDescriptor()
{
}

bool PastryMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PastryMessage *>(obj)!=NULL;
}

const char *PastryMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PastryMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int PastryMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *PastryMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "pastryMsgType",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int PastryMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "pastryMsgType")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PastryMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *PastryMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int PastryMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PastryMessage *pp = (PastryMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PastryMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PastryMessage *pp = (PastryMessage *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getPastryMsgType());
        default: return "";
    }
}

bool PastryMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PastryMessage *pp = (PastryMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setPastryMsgType(string2long(value)); return true;
        default: return false;
    }
}

const char *PastryMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        NULL,
    };
    return (field>=0 && field<1) ? fieldStructNames[field] : NULL;
}

void *PastryMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PastryMessage *pp = (PastryMessage *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(PastryJoinMessage);

PastryJoinMessage::PastryJoinMessage(const char *name, int kind) : PastryMessage(name,kind)
{
    this->sendStateTo_var = TransportAddress::UNSPECIFIED_NODE;
}

PastryJoinMessage::PastryJoinMessage(const PastryJoinMessage& other) : PastryMessage()
{
    setName(other.getName());
    operator=(other);
}

PastryJoinMessage::~PastryJoinMessage()
{
}

PastryJoinMessage& PastryJoinMessage::operator=(const PastryJoinMessage& other)
{
    if (this==&other) return *this;
    PastryMessage::operator=(other);
    this->sendStateTo_var = other.sendStateTo_var;
    return *this;
}

void PastryJoinMessage::parsimPack(cCommBuffer *b)
{
    PastryMessage::parsimPack(b);
    doPacking(b,this->sendStateTo_var);
}

void PastryJoinMessage::parsimUnpack(cCommBuffer *b)
{
    PastryMessage::parsimUnpack(b);
    doUnpacking(b,this->sendStateTo_var);
}

TransportAddress& PastryJoinMessage::getSendStateTo()
{
    return sendStateTo_var;
}

void PastryJoinMessage::setSendStateTo(const TransportAddress& sendStateTo_var)
{
    this->sendStateTo_var = sendStateTo_var;
}

class PastryJoinMessageDescriptor : public cClassDescriptor
{
  public:
    PastryJoinMessageDescriptor();
    virtual ~PastryJoinMessageDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(PastryJoinMessageDescriptor);

PastryJoinMessageDescriptor::PastryJoinMessageDescriptor() : cClassDescriptor("PastryJoinMessage", "PastryMessage")
{
}

PastryJoinMessageDescriptor::~PastryJoinMessageDescriptor()
{
}

bool PastryJoinMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PastryJoinMessage *>(obj)!=NULL;
}

const char *PastryJoinMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PastryJoinMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int PastryJoinMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *PastryJoinMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "sendStateTo",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int PastryJoinMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sendStateTo")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PastryJoinMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "TransportAddress",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *PastryJoinMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int PastryJoinMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PastryJoinMessage *pp = (PastryJoinMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PastryJoinMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PastryJoinMessage *pp = (PastryJoinMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSendStateTo(); return out.str();}
        default: return "";
    }
}

bool PastryJoinMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PastryJoinMessage *pp = (PastryJoinMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *PastryJoinMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "TransportAddress",
    };
    return (field>=0 && field<1) ? fieldStructNames[field] : NULL;
}

void *PastryJoinMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PastryJoinMessage *pp = (PastryJoinMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSendStateTo()); break;
        default: return NULL;
    }
}

Register_Class(PastryStateMessage);

PastryStateMessage::PastryStateMessage(const char *name, int kind) : PastryMessage(name,kind)
{
    this->pastryStateMsgType_var = PASTRY_STATE_STD;
    this->sender_var = NodeHandle::UNSPECIFIED_NODE;
    routingTable_arraysize = 0;
    this->routingTable_var = 0;
    leafSet_arraysize = 0;
    this->leafSet_var = 0;
    neighborhoodSet_arraysize = 0;
    this->neighborhoodSet_var = 0;
    this->joinHopCount_var = 0;
    this->lastHop_var = false;
    this->timestamp_var = 0;
}

PastryStateMessage::PastryStateMessage(const PastryStateMessage& other) : PastryMessage()
{
    setName(other.getName());
    routingTable_arraysize = 0;
    this->routingTable_var = 0;
    leafSet_arraysize = 0;
    this->leafSet_var = 0;
    neighborhoodSet_arraysize = 0;
    this->neighborhoodSet_var = 0;
    operator=(other);
}

PastryStateMessage::~PastryStateMessage()
{
    delete [] routingTable_var;
    delete [] leafSet_var;
    delete [] neighborhoodSet_var;
}

PastryStateMessage& PastryStateMessage::operator=(const PastryStateMessage& other)
{
    if (this==&other) return *this;
    PastryMessage::operator=(other);
    this->pastryStateMsgType_var = other.pastryStateMsgType_var;
    this->sender_var = other.sender_var;
    delete [] this->routingTable_var;
    this->routingTable_var = (other.routingTable_arraysize==0) ? NULL : new ::NodeHandle[other.routingTable_arraysize];
    routingTable_arraysize = other.routingTable_arraysize;
    for (unsigned int i=0; i<routingTable_arraysize; i++)
        this->routingTable_var[i] = other.routingTable_var[i];
    delete [] this->leafSet_var;
    this->leafSet_var = (other.leafSet_arraysize==0) ? NULL : new ::NodeHandle[other.leafSet_arraysize];
    leafSet_arraysize = other.leafSet_arraysize;
    for (unsigned int i=0; i<leafSet_arraysize; i++)
        this->leafSet_var[i] = other.leafSet_var[i];
    delete [] this->neighborhoodSet_var;
    this->neighborhoodSet_var = (other.neighborhoodSet_arraysize==0) ? NULL : new ::NodeHandle[other.neighborhoodSet_arraysize];
    neighborhoodSet_arraysize = other.neighborhoodSet_arraysize;
    for (unsigned int i=0; i<neighborhoodSet_arraysize; i++)
        this->neighborhoodSet_var[i] = other.neighborhoodSet_var[i];
    this->joinHopCount_var = other.joinHopCount_var;
    this->lastHop_var = other.lastHop_var;
    this->timestamp_var = other.timestamp_var;
    return *this;
}

void PastryStateMessage::parsimPack(cCommBuffer *b)
{
    PastryMessage::parsimPack(b);
    doPacking(b,this->pastryStateMsgType_var);
    doPacking(b,this->sender_var);
    b->pack(routingTable_arraysize);
    doPacking(b,this->routingTable_var,routingTable_arraysize);
    b->pack(leafSet_arraysize);
    doPacking(b,this->leafSet_var,leafSet_arraysize);
    b->pack(neighborhoodSet_arraysize);
    doPacking(b,this->neighborhoodSet_var,neighborhoodSet_arraysize);
    doPacking(b,this->joinHopCount_var);
    doPacking(b,this->lastHop_var);
    doPacking(b,this->timestamp_var);
}

void PastryStateMessage::parsimUnpack(cCommBuffer *b)
{
    PastryMessage::parsimUnpack(b);
    doUnpacking(b,this->pastryStateMsgType_var);
    doUnpacking(b,this->sender_var);
    delete [] this->routingTable_var;
    b->unpack(routingTable_arraysize);
    if (routingTable_arraysize==0) {
        this->routingTable_var = 0;
    } else {
        this->routingTable_var = new ::NodeHandle[routingTable_arraysize];
        doUnpacking(b,this->routingTable_var,routingTable_arraysize);
    }
    delete [] this->leafSet_var;
    b->unpack(leafSet_arraysize);
    if (leafSet_arraysize==0) {
        this->leafSet_var = 0;
    } else {
        this->leafSet_var = new ::NodeHandle[leafSet_arraysize];
        doUnpacking(b,this->leafSet_var,leafSet_arraysize);
    }
    delete [] this->neighborhoodSet_var;
    b->unpack(neighborhoodSet_arraysize);
    if (neighborhoodSet_arraysize==0) {
        this->neighborhoodSet_var = 0;
    } else {
        this->neighborhoodSet_var = new ::NodeHandle[neighborhoodSet_arraysize];
        doUnpacking(b,this->neighborhoodSet_var,neighborhoodSet_arraysize);
    }
    doUnpacking(b,this->joinHopCount_var);
    doUnpacking(b,this->lastHop_var);
    doUnpacking(b,this->timestamp_var);
}

int PastryStateMessage::getPastryStateMsgType() const
{
    return pastryStateMsgType_var;
}

void PastryStateMessage::setPastryStateMsgType(int pastryStateMsgType_var)
{
    this->pastryStateMsgType_var = pastryStateMsgType_var;
}

NodeHandle& PastryStateMessage::getSender()
{
    return sender_var;
}

void PastryStateMessage::setSender(const NodeHandle& sender_var)
{
    this->sender_var = sender_var;
}

void PastryStateMessage::setRoutingTableArraySize(unsigned int size)
{
    ::NodeHandle *routingTable_var2 = (size==0) ? NULL : new ::NodeHandle[size];
    unsigned int sz = routingTable_arraysize < size ? routingTable_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        routingTable_var2[i] = this->routingTable_var[i];
    routingTable_arraysize = size;
    delete [] this->routingTable_var;
    this->routingTable_var = routingTable_var2;
}

unsigned int PastryStateMessage::getRoutingTableArraySize() const
{
    return routingTable_arraysize;
}

NodeHandle& PastryStateMessage::getRoutingTable(unsigned int k)
{
    if (k>=routingTable_arraysize) throw cRuntimeError("Array of size %d indexed by %d", routingTable_arraysize, k);
    return routingTable_var[k];
}

void PastryStateMessage::setRoutingTable(unsigned int k, const NodeHandle& routingTable_var)
{
    if (k>=routingTable_arraysize) throw cRuntimeError("Array of size %d indexed by %d", routingTable_arraysize, k);
    this->routingTable_var[k]=routingTable_var;
}

void PastryStateMessage::setLeafSetArraySize(unsigned int size)
{
    ::NodeHandle *leafSet_var2 = (size==0) ? NULL : new ::NodeHandle[size];
    unsigned int sz = leafSet_arraysize < size ? leafSet_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        leafSet_var2[i] = this->leafSet_var[i];
    leafSet_arraysize = size;
    delete [] this->leafSet_var;
    this->leafSet_var = leafSet_var2;
}

unsigned int PastryStateMessage::getLeafSetArraySize() const
{
    return leafSet_arraysize;
}

NodeHandle& PastryStateMessage::getLeafSet(unsigned int k)
{
    if (k>=leafSet_arraysize) throw cRuntimeError("Array of size %d indexed by %d", leafSet_arraysize, k);
    return leafSet_var[k];
}

void PastryStateMessage::setLeafSet(unsigned int k, const NodeHandle& leafSet_var)
{
    if (k>=leafSet_arraysize) throw cRuntimeError("Array of size %d indexed by %d", leafSet_arraysize, k);
    this->leafSet_var[k]=leafSet_var;
}

void PastryStateMessage::setNeighborhoodSetArraySize(unsigned int size)
{
    ::NodeHandle *neighborhoodSet_var2 = (size==0) ? NULL : new ::NodeHandle[size];
    unsigned int sz = neighborhoodSet_arraysize < size ? neighborhoodSet_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        neighborhoodSet_var2[i] = this->neighborhoodSet_var[i];
    neighborhoodSet_arraysize = size;
    delete [] this->neighborhoodSet_var;
    this->neighborhoodSet_var = neighborhoodSet_var2;
}

unsigned int PastryStateMessage::getNeighborhoodSetArraySize() const
{
    return neighborhoodSet_arraysize;
}

NodeHandle& PastryStateMessage::getNeighborhoodSet(unsigned int k)
{
    if (k>=neighborhoodSet_arraysize) throw cRuntimeError("Array of size %d indexed by %d", neighborhoodSet_arraysize, k);
    return neighborhoodSet_var[k];
}

void PastryStateMessage::setNeighborhoodSet(unsigned int k, const NodeHandle& neighborhoodSet_var)
{
    if (k>=neighborhoodSet_arraysize) throw cRuntimeError("Array of size %d indexed by %d", neighborhoodSet_arraysize, k);
    this->neighborhoodSet_var[k]=neighborhoodSet_var;
}

int PastryStateMessage::getJoinHopCount() const
{
    return joinHopCount_var;
}

void PastryStateMessage::setJoinHopCount(int joinHopCount_var)
{
    this->joinHopCount_var = joinHopCount_var;
}

bool PastryStateMessage::getLastHop() const
{
    return lastHop_var;
}

void PastryStateMessage::setLastHop(bool lastHop_var)
{
    this->lastHop_var = lastHop_var;
}

simtime_t PastryStateMessage::getTimestamp() const
{
    return timestamp_var;
}

void PastryStateMessage::setTimestamp(simtime_t timestamp_var)
{
    this->timestamp_var = timestamp_var;
}

class PastryStateMessageDescriptor : public cClassDescriptor
{
  public:
    PastryStateMessageDescriptor();
    virtual ~PastryStateMessageDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(PastryStateMessageDescriptor);

PastryStateMessageDescriptor::PastryStateMessageDescriptor() : cClassDescriptor("PastryStateMessage", "PastryMessage")
{
}

PastryStateMessageDescriptor::~PastryStateMessageDescriptor()
{
}

bool PastryStateMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PastryStateMessage *>(obj)!=NULL;
}

const char *PastryStateMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PastryStateMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 8+basedesc->getFieldCount(object) : 8;
}

unsigned int PastryStateMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISARRAY | FD_ISCOMPOUND,
        FD_ISARRAY | FD_ISCOMPOUND,
        FD_ISARRAY | FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<8) ? fieldTypeFlags[field] : 0;
}

const char *PastryStateMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "pastryStateMsgType",
        "sender",
        "routingTable",
        "leafSet",
        "neighborhoodSet",
        "joinHopCount",
        "lastHop",
        "timestamp",
    };
    return (field>=0 && field<8) ? fieldNames[field] : NULL;
}

int PastryStateMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "pastryStateMsgType")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sender")==0) return base+1;
    if (fieldName[0]=='r' && strcmp(fieldName, "routingTable")==0) return base+2;
    if (fieldName[0]=='l' && strcmp(fieldName, "leafSet")==0) return base+3;
    if (fieldName[0]=='n' && strcmp(fieldName, "neighborhoodSet")==0) return base+4;
    if (fieldName[0]=='j' && strcmp(fieldName, "joinHopCount")==0) return base+5;
    if (fieldName[0]=='l' && strcmp(fieldName, "lastHop")==0) return base+6;
    if (fieldName[0]=='t' && strcmp(fieldName, "timestamp")==0) return base+7;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PastryStateMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "NodeHandle",
        "NodeHandle",
        "NodeHandle",
        "NodeHandle",
        "int",
        "bool",
        "simtime_t",
    };
    return (field>=0 && field<8) ? fieldTypeStrings[field] : NULL;
}

const char *PastryStateMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int PastryStateMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PastryStateMessage *pp = (PastryStateMessage *)object; (void)pp;
    switch (field) {
        case 2: return pp->getRoutingTableArraySize();
        case 3: return pp->getLeafSetArraySize();
        case 4: return pp->getNeighborhoodSetArraySize();
        default: return 0;
    }
}

std::string PastryStateMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PastryStateMessage *pp = (PastryStateMessage *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getPastryStateMsgType());
        case 1: {std::stringstream out; out << pp->getSender(); return out.str();}
        case 2: {std::stringstream out; out << pp->getRoutingTable(i); return out.str();}
        case 3: {std::stringstream out; out << pp->getLeafSet(i); return out.str();}
        case 4: {std::stringstream out; out << pp->getNeighborhoodSet(i); return out.str();}
        case 5: return long2string(pp->getJoinHopCount());
        case 6: return bool2string(pp->getLastHop());
        case 7: return double2string(pp->getTimestamp());
        default: return "";
    }
}

bool PastryStateMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PastryStateMessage *pp = (PastryStateMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setPastryStateMsgType(string2long(value)); return true;
        case 5: pp->setJoinHopCount(string2long(value)); return true;
        case 6: pp->setLastHop(string2bool(value)); return true;
        case 7: pp->setTimestamp(string2double(value)); return true;
        default: return false;
    }
}

const char *PastryStateMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        NULL,
        "NodeHandle",
        "NodeHandle",
        "NodeHandle",
        "NodeHandle",
        NULL,
        NULL,
        NULL,
    };
    return (field>=0 && field<8) ? fieldStructNames[field] : NULL;
}

void *PastryStateMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PastryStateMessage *pp = (PastryStateMessage *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getSender()); break;
        case 2: return (void *)(&pp->getRoutingTable(i)); break;
        case 3: return (void *)(&pp->getLeafSet(i)); break;
        case 4: return (void *)(&pp->getNeighborhoodSet(i)); break;
        default: return NULL;
    }
}

Register_Class(PastryFindNodeExtData);

PastryFindNodeExtData::PastryFindNodeExtData(const char *name, int kind) : cPacket(name,kind)
{
    this->sendStateTo_var = TransportAddress::UNSPECIFIED_NODE;
    this->joinHopCount_var = 0;
}

PastryFindNodeExtData::PastryFindNodeExtData(const PastryFindNodeExtData& other) : cPacket()
{
    setName(other.getName());
    operator=(other);
}

PastryFindNodeExtData::~PastryFindNodeExtData()
{
}

PastryFindNodeExtData& PastryFindNodeExtData::operator=(const PastryFindNodeExtData& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    this->sendStateTo_var = other.sendStateTo_var;
    this->joinHopCount_var = other.joinHopCount_var;
    return *this;
}

void PastryFindNodeExtData::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->sendStateTo_var);
    doPacking(b,this->joinHopCount_var);
}

void PastryFindNodeExtData::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->sendStateTo_var);
    doUnpacking(b,this->joinHopCount_var);
}

TransportAddress& PastryFindNodeExtData::getSendStateTo()
{
    return sendStateTo_var;
}

void PastryFindNodeExtData::setSendStateTo(const TransportAddress& sendStateTo_var)
{
    this->sendStateTo_var = sendStateTo_var;
}

int PastryFindNodeExtData::getJoinHopCount() const
{
    return joinHopCount_var;
}

void PastryFindNodeExtData::setJoinHopCount(int joinHopCount_var)
{
    this->joinHopCount_var = joinHopCount_var;
}

class PastryFindNodeExtDataDescriptor : public cClassDescriptor
{
  public:
    PastryFindNodeExtDataDescriptor();
    virtual ~PastryFindNodeExtDataDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(PastryFindNodeExtDataDescriptor);

PastryFindNodeExtDataDescriptor::PastryFindNodeExtDataDescriptor() : cClassDescriptor("PastryFindNodeExtData", "cPacket")
{
}

PastryFindNodeExtDataDescriptor::~PastryFindNodeExtDataDescriptor()
{
}

bool PastryFindNodeExtDataDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PastryFindNodeExtData *>(obj)!=NULL;
}

const char *PastryFindNodeExtDataDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PastryFindNodeExtDataDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int PastryFindNodeExtDataDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *PastryFindNodeExtDataDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "sendStateTo",
        "joinHopCount",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int PastryFindNodeExtDataDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sendStateTo")==0) return base+0;
    if (fieldName[0]=='j' && strcmp(fieldName, "joinHopCount")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PastryFindNodeExtDataDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "TransportAddress",
        "int",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *PastryFindNodeExtDataDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int PastryFindNodeExtDataDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PastryFindNodeExtData *pp = (PastryFindNodeExtData *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PastryFindNodeExtDataDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PastryFindNodeExtData *pp = (PastryFindNodeExtData *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSendStateTo(); return out.str();}
        case 1: return long2string(pp->getJoinHopCount());
        default: return "";
    }
}

bool PastryFindNodeExtDataDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PastryFindNodeExtData *pp = (PastryFindNodeExtData *)object; (void)pp;
    switch (field) {
        case 1: pp->setJoinHopCount(string2long(value)); return true;
        default: return false;
    }
}

const char *PastryFindNodeExtDataDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "TransportAddress",
        NULL,
    };
    return (field>=0 && field<2) ? fieldStructNames[field] : NULL;
}

void *PastryFindNodeExtDataDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PastryFindNodeExtData *pp = (PastryFindNodeExtData *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSendStateTo()); break;
        default: return NULL;
    }
}

Register_Class(PastryNewLeafsMessage);

PastryNewLeafsMessage::PastryNewLeafsMessage(const char *name, int kind) : cPacket(name,kind)
{
    leafs_arraysize = 0;
    this->leafs_var = 0;
}

PastryNewLeafsMessage::PastryNewLeafsMessage(const PastryNewLeafsMessage& other) : cPacket()
{
    setName(other.getName());
    leafs_arraysize = 0;
    this->leafs_var = 0;
    operator=(other);
}

PastryNewLeafsMessage::~PastryNewLeafsMessage()
{
    delete [] leafs_var;
}

PastryNewLeafsMessage& PastryNewLeafsMessage::operator=(const PastryNewLeafsMessage& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    delete [] this->leafs_var;
    this->leafs_var = (other.leafs_arraysize==0) ? NULL : new ::NodeHandle[other.leafs_arraysize];
    leafs_arraysize = other.leafs_arraysize;
    for (unsigned int i=0; i<leafs_arraysize; i++)
        this->leafs_var[i] = other.leafs_var[i];
    return *this;
}

void PastryNewLeafsMessage::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    b->pack(leafs_arraysize);
    doPacking(b,this->leafs_var,leafs_arraysize);
}

void PastryNewLeafsMessage::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    delete [] this->leafs_var;
    b->unpack(leafs_arraysize);
    if (leafs_arraysize==0) {
        this->leafs_var = 0;
    } else {
        this->leafs_var = new ::NodeHandle[leafs_arraysize];
        doUnpacking(b,this->leafs_var,leafs_arraysize);
    }
}

void PastryNewLeafsMessage::setLeafsArraySize(unsigned int size)
{
    ::NodeHandle *leafs_var2 = (size==0) ? NULL : new ::NodeHandle[size];
    unsigned int sz = leafs_arraysize < size ? leafs_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        leafs_var2[i] = this->leafs_var[i];
    leafs_arraysize = size;
    delete [] this->leafs_var;
    this->leafs_var = leafs_var2;
}

unsigned int PastryNewLeafsMessage::getLeafsArraySize() const
{
    return leafs_arraysize;
}

NodeHandle& PastryNewLeafsMessage::getLeafs(unsigned int k)
{
    if (k>=leafs_arraysize) throw cRuntimeError("Array of size %d indexed by %d", leafs_arraysize, k);
    return leafs_var[k];
}

void PastryNewLeafsMessage::setLeafs(unsigned int k, const NodeHandle& leafs_var)
{
    if (k>=leafs_arraysize) throw cRuntimeError("Array of size %d indexed by %d", leafs_arraysize, k);
    this->leafs_var[k]=leafs_var;
}

class PastryNewLeafsMessageDescriptor : public cClassDescriptor
{
  public:
    PastryNewLeafsMessageDescriptor();
    virtual ~PastryNewLeafsMessageDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(PastryNewLeafsMessageDescriptor);

PastryNewLeafsMessageDescriptor::PastryNewLeafsMessageDescriptor() : cClassDescriptor("PastryNewLeafsMessage", "cPacket")
{
}

PastryNewLeafsMessageDescriptor::~PastryNewLeafsMessageDescriptor()
{
}

bool PastryNewLeafsMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PastryNewLeafsMessage *>(obj)!=NULL;
}

const char *PastryNewLeafsMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PastryNewLeafsMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int PastryNewLeafsMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISARRAY | FD_ISCOMPOUND,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *PastryNewLeafsMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "leafs",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int PastryNewLeafsMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='l' && strcmp(fieldName, "leafs")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PastryNewLeafsMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "NodeHandle",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *PastryNewLeafsMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int PastryNewLeafsMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PastryNewLeafsMessage *pp = (PastryNewLeafsMessage *)object; (void)pp;
    switch (field) {
        case 0: return pp->getLeafsArraySize();
        default: return 0;
    }
}

std::string PastryNewLeafsMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PastryNewLeafsMessage *pp = (PastryNewLeafsMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getLeafs(i); return out.str();}
        default: return "";
    }
}

bool PastryNewLeafsMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PastryNewLeafsMessage *pp = (PastryNewLeafsMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *PastryNewLeafsMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "NodeHandle",
    };
    return (field>=0 && field<1) ? fieldStructNames[field] : NULL;
}

void *PastryNewLeafsMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PastryNewLeafsMessage *pp = (PastryNewLeafsMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getLeafs(i)); break;
        default: return NULL;
    }
}

Register_Class(PastrySendState);

PastrySendState::PastrySendState(const char *name, int kind) : cPacket(name,kind)
{
    this->dest_var = TransportAddress::UNSPECIFIED_NODE;
}

PastrySendState::PastrySendState(const PastrySendState& other) : cPacket()
{
    setName(other.getName());
    operator=(other);
}

PastrySendState::~PastrySendState()
{
}

PastrySendState& PastrySendState::operator=(const PastrySendState& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    this->dest_var = other.dest_var;
    return *this;
}

void PastrySendState::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->dest_var);
}

void PastrySendState::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->dest_var);
}

TransportAddress& PastrySendState::getDest()
{
    return dest_var;
}

void PastrySendState::setDest(const TransportAddress& dest_var)
{
    this->dest_var = dest_var;
}

class PastrySendStateDescriptor : public cClassDescriptor
{
  public:
    PastrySendStateDescriptor();
    virtual ~PastrySendStateDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(PastrySendStateDescriptor);

PastrySendStateDescriptor::PastrySendStateDescriptor() : cClassDescriptor("PastrySendState", "cPacket")
{
}

PastrySendStateDescriptor::~PastrySendStateDescriptor()
{
}

bool PastrySendStateDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PastrySendState *>(obj)!=NULL;
}

const char *PastrySendStateDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PastrySendStateDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int PastrySendStateDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *PastrySendStateDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "dest",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int PastrySendStateDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='d' && strcmp(fieldName, "dest")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PastrySendStateDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "TransportAddress",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *PastrySendStateDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int PastrySendStateDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PastrySendState *pp = (PastrySendState *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PastrySendStateDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PastrySendState *pp = (PastrySendState *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getDest(); return out.str();}
        default: return "";
    }
}

bool PastrySendStateDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PastrySendState *pp = (PastrySendState *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *PastrySendStateDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "TransportAddress",
    };
    return (field>=0 && field<1) ? fieldStructNames[field] : NULL;
}

void *PastrySendStateDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PastrySendState *pp = (PastrySendState *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getDest()); break;
        default: return NULL;
    }
}

Register_Class(PastryLeafsetMessage);

PastryLeafsetMessage::PastryLeafsetMessage(const char *name, int kind) : PastryMessage(name,kind)
{
    this->sender_var = NodeHandle::UNSPECIFIED_NODE;
    this->sendStateTo_var = TransportAddress::UNSPECIFIED_NODE;
    leafSet_arraysize = 0;
    this->leafSet_var = 0;
    this->timestamp_var = 0;
}

PastryLeafsetMessage::PastryLeafsetMessage(const PastryLeafsetMessage& other) : PastryMessage()
{
    setName(other.getName());
    leafSet_arraysize = 0;
    this->leafSet_var = 0;
    operator=(other);
}

PastryLeafsetMessage::~PastryLeafsetMessage()
{
    delete [] leafSet_var;
}

PastryLeafsetMessage& PastryLeafsetMessage::operator=(const PastryLeafsetMessage& other)
{
    if (this==&other) return *this;
    PastryMessage::operator=(other);
    this->sender_var = other.sender_var;
    this->sendStateTo_var = other.sendStateTo_var;
    delete [] this->leafSet_var;
    this->leafSet_var = (other.leafSet_arraysize==0) ? NULL : new ::NodeHandle[other.leafSet_arraysize];
    leafSet_arraysize = other.leafSet_arraysize;
    for (unsigned int i=0; i<leafSet_arraysize; i++)
        this->leafSet_var[i] = other.leafSet_var[i];
    this->timestamp_var = other.timestamp_var;
    return *this;
}

void PastryLeafsetMessage::parsimPack(cCommBuffer *b)
{
    PastryMessage::parsimPack(b);
    doPacking(b,this->sender_var);
    doPacking(b,this->sendStateTo_var);
    b->pack(leafSet_arraysize);
    doPacking(b,this->leafSet_var,leafSet_arraysize);
    doPacking(b,this->timestamp_var);
}

void PastryLeafsetMessage::parsimUnpack(cCommBuffer *b)
{
    PastryMessage::parsimUnpack(b);
    doUnpacking(b,this->sender_var);
    doUnpacking(b,this->sendStateTo_var);
    delete [] this->leafSet_var;
    b->unpack(leafSet_arraysize);
    if (leafSet_arraysize==0) {
        this->leafSet_var = 0;
    } else {
        this->leafSet_var = new ::NodeHandle[leafSet_arraysize];
        doUnpacking(b,this->leafSet_var,leafSet_arraysize);
    }
    doUnpacking(b,this->timestamp_var);
}

NodeHandle& PastryLeafsetMessage::getSender()
{
    return sender_var;
}

void PastryLeafsetMessage::setSender(const NodeHandle& sender_var)
{
    this->sender_var = sender_var;
}

TransportAddress& PastryLeafsetMessage::getSendStateTo()
{
    return sendStateTo_var;
}

void PastryLeafsetMessage::setSendStateTo(const TransportAddress& sendStateTo_var)
{
    this->sendStateTo_var = sendStateTo_var;
}

void PastryLeafsetMessage::setLeafSetArraySize(unsigned int size)
{
    ::NodeHandle *leafSet_var2 = (size==0) ? NULL : new ::NodeHandle[size];
    unsigned int sz = leafSet_arraysize < size ? leafSet_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        leafSet_var2[i] = this->leafSet_var[i];
    leafSet_arraysize = size;
    delete [] this->leafSet_var;
    this->leafSet_var = leafSet_var2;
}

unsigned int PastryLeafsetMessage::getLeafSetArraySize() const
{
    return leafSet_arraysize;
}

NodeHandle& PastryLeafsetMessage::getLeafSet(unsigned int k)
{
    if (k>=leafSet_arraysize) throw cRuntimeError("Array of size %d indexed by %d", leafSet_arraysize, k);
    return leafSet_var[k];
}

void PastryLeafsetMessage::setLeafSet(unsigned int k, const NodeHandle& leafSet_var)
{
    if (k>=leafSet_arraysize) throw cRuntimeError("Array of size %d indexed by %d", leafSet_arraysize, k);
    this->leafSet_var[k]=leafSet_var;
}

simtime_t PastryLeafsetMessage::getTimestamp() const
{
    return timestamp_var;
}

void PastryLeafsetMessage::setTimestamp(simtime_t timestamp_var)
{
    this->timestamp_var = timestamp_var;
}

class PastryLeafsetMessageDescriptor : public cClassDescriptor
{
  public:
    PastryLeafsetMessageDescriptor();
    virtual ~PastryLeafsetMessageDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(PastryLeafsetMessageDescriptor);

PastryLeafsetMessageDescriptor::PastryLeafsetMessageDescriptor() : cClassDescriptor("PastryLeafsetMessage", "PastryMessage")
{
}

PastryLeafsetMessageDescriptor::~PastryLeafsetMessageDescriptor()
{
}

bool PastryLeafsetMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PastryLeafsetMessage *>(obj)!=NULL;
}

const char *PastryLeafsetMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PastryLeafsetMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int PastryLeafsetMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISARRAY | FD_ISCOMPOUND,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *PastryLeafsetMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "sender",
        "sendStateTo",
        "leafSet",
        "timestamp",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int PastryLeafsetMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sender")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sendStateTo")==0) return base+1;
    if (fieldName[0]=='l' && strcmp(fieldName, "leafSet")==0) return base+2;
    if (fieldName[0]=='t' && strcmp(fieldName, "timestamp")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PastryLeafsetMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "NodeHandle",
        "TransportAddress",
        "NodeHandle",
        "simtime_t",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *PastryLeafsetMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int PastryLeafsetMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PastryLeafsetMessage *pp = (PastryLeafsetMessage *)object; (void)pp;
    switch (field) {
        case 2: return pp->getLeafSetArraySize();
        default: return 0;
    }
}

std::string PastryLeafsetMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PastryLeafsetMessage *pp = (PastryLeafsetMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSender(); return out.str();}
        case 1: {std::stringstream out; out << pp->getSendStateTo(); return out.str();}
        case 2: {std::stringstream out; out << pp->getLeafSet(i); return out.str();}
        case 3: return double2string(pp->getTimestamp());
        default: return "";
    }
}

bool PastryLeafsetMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PastryLeafsetMessage *pp = (PastryLeafsetMessage *)object; (void)pp;
    switch (field) {
        case 3: pp->setTimestamp(string2double(value)); return true;
        default: return false;
    }
}

const char *PastryLeafsetMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "NodeHandle",
        "TransportAddress",
        "NodeHandle",
        NULL,
    };
    return (field>=0 && field<4) ? fieldStructNames[field] : NULL;
}

void *PastryLeafsetMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PastryLeafsetMessage *pp = (PastryLeafsetMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSender()); break;
        case 1: return (void *)(&pp->getSendStateTo()); break;
        case 2: return (void *)(&pp->getLeafSet(i)); break;
        default: return NULL;
    }
}

Register_Class(PastryRoutingRowRequestMessage);

PastryRoutingRowRequestMessage::PastryRoutingRowRequestMessage(const char *name, int kind) : PastryMessage(name,kind)
{
    this->sendStateTo_var = TransportAddress::UNSPECIFIED_NODE;
    this->row_var = 0;
}

PastryRoutingRowRequestMessage::PastryRoutingRowRequestMessage(const PastryRoutingRowRequestMessage& other) : PastryMessage()
{
    setName(other.getName());
    operator=(other);
}

PastryRoutingRowRequestMessage::~PastryRoutingRowRequestMessage()
{
}

PastryRoutingRowRequestMessage& PastryRoutingRowRequestMessage::operator=(const PastryRoutingRowRequestMessage& other)
{
    if (this==&other) return *this;
    PastryMessage::operator=(other);
    this->sendStateTo_var = other.sendStateTo_var;
    this->row_var = other.row_var;
    return *this;
}

void PastryRoutingRowRequestMessage::parsimPack(cCommBuffer *b)
{
    PastryMessage::parsimPack(b);
    doPacking(b,this->sendStateTo_var);
    doPacking(b,this->row_var);
}

void PastryRoutingRowRequestMessage::parsimUnpack(cCommBuffer *b)
{
    PastryMessage::parsimUnpack(b);
    doUnpacking(b,this->sendStateTo_var);
    doUnpacking(b,this->row_var);
}

TransportAddress& PastryRoutingRowRequestMessage::getSendStateTo()
{
    return sendStateTo_var;
}

void PastryRoutingRowRequestMessage::setSendStateTo(const TransportAddress& sendStateTo_var)
{
    this->sendStateTo_var = sendStateTo_var;
}

int PastryRoutingRowRequestMessage::getRow() const
{
    return row_var;
}

void PastryRoutingRowRequestMessage::setRow(int row_var)
{
    this->row_var = row_var;
}

class PastryRoutingRowRequestMessageDescriptor : public cClassDescriptor
{
  public:
    PastryRoutingRowRequestMessageDescriptor();
    virtual ~PastryRoutingRowRequestMessageDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(PastryRoutingRowRequestMessageDescriptor);

PastryRoutingRowRequestMessageDescriptor::PastryRoutingRowRequestMessageDescriptor() : cClassDescriptor("PastryRoutingRowRequestMessage", "PastryMessage")
{
}

PastryRoutingRowRequestMessageDescriptor::~PastryRoutingRowRequestMessageDescriptor()
{
}

bool PastryRoutingRowRequestMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PastryRoutingRowRequestMessage *>(obj)!=NULL;
}

const char *PastryRoutingRowRequestMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PastryRoutingRowRequestMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int PastryRoutingRowRequestMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *PastryRoutingRowRequestMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "sendStateTo",
        "row",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int PastryRoutingRowRequestMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sendStateTo")==0) return base+0;
    if (fieldName[0]=='r' && strcmp(fieldName, "row")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PastryRoutingRowRequestMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "TransportAddress",
        "int",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *PastryRoutingRowRequestMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int PastryRoutingRowRequestMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PastryRoutingRowRequestMessage *pp = (PastryRoutingRowRequestMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PastryRoutingRowRequestMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PastryRoutingRowRequestMessage *pp = (PastryRoutingRowRequestMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSendStateTo(); return out.str();}
        case 1: return long2string(pp->getRow());
        default: return "";
    }
}

bool PastryRoutingRowRequestMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PastryRoutingRowRequestMessage *pp = (PastryRoutingRowRequestMessage *)object; (void)pp;
    switch (field) {
        case 1: pp->setRow(string2long(value)); return true;
        default: return false;
    }
}

const char *PastryRoutingRowRequestMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "TransportAddress",
        NULL,
    };
    return (field>=0 && field<2) ? fieldStructNames[field] : NULL;
}

void *PastryRoutingRowRequestMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PastryRoutingRowRequestMessage *pp = (PastryRoutingRowRequestMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSendStateTo()); break;
        default: return NULL;
    }
}

Register_Class(PastryRoutingRowMessage);

PastryRoutingRowMessage::PastryRoutingRowMessage(const char *name, int kind) : PastryMessage(name,kind)
{
    this->sender_var = NodeHandle::UNSPECIFIED_NODE;
    routingTable_arraysize = 0;
    this->routingTable_var = 0;
    this->row_var = 0;
    this->timestamp_var = 0;
}

PastryRoutingRowMessage::PastryRoutingRowMessage(const PastryRoutingRowMessage& other) : PastryMessage()
{
    setName(other.getName());
    routingTable_arraysize = 0;
    this->routingTable_var = 0;
    operator=(other);
}

PastryRoutingRowMessage::~PastryRoutingRowMessage()
{
    delete [] routingTable_var;
}

PastryRoutingRowMessage& PastryRoutingRowMessage::operator=(const PastryRoutingRowMessage& other)
{
    if (this==&other) return *this;
    PastryMessage::operator=(other);
    this->sender_var = other.sender_var;
    delete [] this->routingTable_var;
    this->routingTable_var = (other.routingTable_arraysize==0) ? NULL : new ::NodeHandle[other.routingTable_arraysize];
    routingTable_arraysize = other.routingTable_arraysize;
    for (unsigned int i=0; i<routingTable_arraysize; i++)
        this->routingTable_var[i] = other.routingTable_var[i];
    this->row_var = other.row_var;
    this->timestamp_var = other.timestamp_var;
    return *this;
}

void PastryRoutingRowMessage::parsimPack(cCommBuffer *b)
{
    PastryMessage::parsimPack(b);
    doPacking(b,this->sender_var);
    b->pack(routingTable_arraysize);
    doPacking(b,this->routingTable_var,routingTable_arraysize);
    doPacking(b,this->row_var);
    doPacking(b,this->timestamp_var);
}

void PastryRoutingRowMessage::parsimUnpack(cCommBuffer *b)
{
    PastryMessage::parsimUnpack(b);
    doUnpacking(b,this->sender_var);
    delete [] this->routingTable_var;
    b->unpack(routingTable_arraysize);
    if (routingTable_arraysize==0) {
        this->routingTable_var = 0;
    } else {
        this->routingTable_var = new ::NodeHandle[routingTable_arraysize];
        doUnpacking(b,this->routingTable_var,routingTable_arraysize);
    }
    doUnpacking(b,this->row_var);
    doUnpacking(b,this->timestamp_var);
}

NodeHandle& PastryRoutingRowMessage::getSender()
{
    return sender_var;
}

void PastryRoutingRowMessage::setSender(const NodeHandle& sender_var)
{
    this->sender_var = sender_var;
}

void PastryRoutingRowMessage::setRoutingTableArraySize(unsigned int size)
{
    ::NodeHandle *routingTable_var2 = (size==0) ? NULL : new ::NodeHandle[size];
    unsigned int sz = routingTable_arraysize < size ? routingTable_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        routingTable_var2[i] = this->routingTable_var[i];
    routingTable_arraysize = size;
    delete [] this->routingTable_var;
    this->routingTable_var = routingTable_var2;
}

unsigned int PastryRoutingRowMessage::getRoutingTableArraySize() const
{
    return routingTable_arraysize;
}

NodeHandle& PastryRoutingRowMessage::getRoutingTable(unsigned int k)
{
    if (k>=routingTable_arraysize) throw cRuntimeError("Array of size %d indexed by %d", routingTable_arraysize, k);
    return routingTable_var[k];
}

void PastryRoutingRowMessage::setRoutingTable(unsigned int k, const NodeHandle& routingTable_var)
{
    if (k>=routingTable_arraysize) throw cRuntimeError("Array of size %d indexed by %d", routingTable_arraysize, k);
    this->routingTable_var[k]=routingTable_var;
}

int PastryRoutingRowMessage::getRow() const
{
    return row_var;
}

void PastryRoutingRowMessage::setRow(int row_var)
{
    this->row_var = row_var;
}

simtime_t PastryRoutingRowMessage::getTimestamp() const
{
    return timestamp_var;
}

void PastryRoutingRowMessage::setTimestamp(simtime_t timestamp_var)
{
    this->timestamp_var = timestamp_var;
}

class PastryRoutingRowMessageDescriptor : public cClassDescriptor
{
  public:
    PastryRoutingRowMessageDescriptor();
    virtual ~PastryRoutingRowMessageDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(PastryRoutingRowMessageDescriptor);

PastryRoutingRowMessageDescriptor::PastryRoutingRowMessageDescriptor() : cClassDescriptor("PastryRoutingRowMessage", "PastryMessage")
{
}

PastryRoutingRowMessageDescriptor::~PastryRoutingRowMessageDescriptor()
{
}

bool PastryRoutingRowMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PastryRoutingRowMessage *>(obj)!=NULL;
}

const char *PastryRoutingRowMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PastryRoutingRowMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int PastryRoutingRowMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
        FD_ISARRAY | FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *PastryRoutingRowMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "sender",
        "routingTable",
        "row",
        "timestamp",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int PastryRoutingRowMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sender")==0) return base+0;
    if (fieldName[0]=='r' && strcmp(fieldName, "routingTable")==0) return base+1;
    if (fieldName[0]=='r' && strcmp(fieldName, "row")==0) return base+2;
    if (fieldName[0]=='t' && strcmp(fieldName, "timestamp")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PastryRoutingRowMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "NodeHandle",
        "NodeHandle",
        "int",
        "simtime_t",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *PastryRoutingRowMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int PastryRoutingRowMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PastryRoutingRowMessage *pp = (PastryRoutingRowMessage *)object; (void)pp;
    switch (field) {
        case 1: return pp->getRoutingTableArraySize();
        default: return 0;
    }
}

std::string PastryRoutingRowMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PastryRoutingRowMessage *pp = (PastryRoutingRowMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSender(); return out.str();}
        case 1: {std::stringstream out; out << pp->getRoutingTable(i); return out.str();}
        case 2: return long2string(pp->getRow());
        case 3: return double2string(pp->getTimestamp());
        default: return "";
    }
}

bool PastryRoutingRowMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PastryRoutingRowMessage *pp = (PastryRoutingRowMessage *)object; (void)pp;
    switch (field) {
        case 2: pp->setRow(string2long(value)); return true;
        case 3: pp->setTimestamp(string2double(value)); return true;
        default: return false;
    }
}

const char *PastryRoutingRowMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "NodeHandle",
        "NodeHandle",
        NULL,
        NULL,
    };
    return (field>=0 && field<4) ? fieldStructNames[field] : NULL;
}

void *PastryRoutingRowMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PastryRoutingRowMessage *pp = (PastryRoutingRowMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSender()); break;
        case 1: return (void *)(&pp->getRoutingTable(i)); break;
        default: return NULL;
    }
}

Register_Class(PastryRequestMessage);

PastryRequestMessage::PastryRequestMessage(const char *name, int kind) : PastryMessage(name,kind)
{
    this->sendStateTo_var = TransportAddress::UNSPECIFIED_NODE;
    this->pastryReqType_var = PASTRY_MSG_STD;
}

PastryRequestMessage::PastryRequestMessage(const PastryRequestMessage& other) : PastryMessage()
{
    setName(other.getName());
    operator=(other);
}

PastryRequestMessage::~PastryRequestMessage()
{
}

PastryRequestMessage& PastryRequestMessage::operator=(const PastryRequestMessage& other)
{
    if (this==&other) return *this;
    PastryMessage::operator=(other);
    this->sendStateTo_var = other.sendStateTo_var;
    this->pastryReqType_var = other.pastryReqType_var;
    return *this;
}

void PastryRequestMessage::parsimPack(cCommBuffer *b)
{
    PastryMessage::parsimPack(b);
    doPacking(b,this->sendStateTo_var);
    doPacking(b,this->pastryReqType_var);
}

void PastryRequestMessage::parsimUnpack(cCommBuffer *b)
{
    PastryMessage::parsimUnpack(b);
    doUnpacking(b,this->sendStateTo_var);
    doUnpacking(b,this->pastryReqType_var);
}

TransportAddress& PastryRequestMessage::getSendStateTo()
{
    return sendStateTo_var;
}

void PastryRequestMessage::setSendStateTo(const TransportAddress& sendStateTo_var)
{
    this->sendStateTo_var = sendStateTo_var;
}

int PastryRequestMessage::getPastryReqType() const
{
    return pastryReqType_var;
}

void PastryRequestMessage::setPastryReqType(int pastryReqType_var)
{
    this->pastryReqType_var = pastryReqType_var;
}

class PastryRequestMessageDescriptor : public cClassDescriptor
{
  public:
    PastryRequestMessageDescriptor();
    virtual ~PastryRequestMessageDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(PastryRequestMessageDescriptor);

PastryRequestMessageDescriptor::PastryRequestMessageDescriptor() : cClassDescriptor("PastryRequestMessage", "PastryMessage")
{
}

PastryRequestMessageDescriptor::~PastryRequestMessageDescriptor()
{
}

bool PastryRequestMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PastryRequestMessage *>(obj)!=NULL;
}

const char *PastryRequestMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PastryRequestMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int PastryRequestMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *PastryRequestMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "sendStateTo",
        "pastryReqType",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int PastryRequestMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sendStateTo")==0) return base+0;
    if (fieldName[0]=='p' && strcmp(fieldName, "pastryReqType")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PastryRequestMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "TransportAddress",
        "int",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *PastryRequestMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int PastryRequestMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PastryRequestMessage *pp = (PastryRequestMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PastryRequestMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PastryRequestMessage *pp = (PastryRequestMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSendStateTo(); return out.str();}
        case 1: return long2string(pp->getPastryReqType());
        default: return "";
    }
}

bool PastryRequestMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PastryRequestMessage *pp = (PastryRequestMessage *)object; (void)pp;
    switch (field) {
        case 1: pp->setPastryReqType(string2long(value)); return true;
        default: return false;
    }
}

const char *PastryRequestMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "TransportAddress",
        NULL,
    };
    return (field>=0 && field<2) ? fieldStructNames[field] : NULL;
}

void *PastryRequestMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PastryRequestMessage *pp = (PastryRequestMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSendStateTo()); break;
        default: return NULL;
    }
}


