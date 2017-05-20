#ifndef __MB_PHYSICS_ICOLLIDER__
#define __MB_PHYSICS_ICOLLIDER__

#include <mb/mb.h>

#include <mb_physics/api.h>

namespace mb
{
  namespace physics
  {
    class ICollider : public Component
    {
      IMPLEMENT_COMPONENT( ICollider )
    public:
      MB_PHYSICS_API
      virtual ~ICollider( void );
    protected:
      ICollider( void );
    };
  }
}

#endif /* __MB_PHYSICS_ICOLLIDER__ */
