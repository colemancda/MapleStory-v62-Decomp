/* FUN_50408e84 - 0x50408e84 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 __thiscall FUN_50408e84(void *this,int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((int)this + 0x330);
  *(undefined4 *)((int)this + 0x330) = 0;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((int)this + 900);
  if ((*(int *)((int)this + 0x98) == 0) || (*(int *)((int)this + 0x94) < 0)) {
    iVar4 = (**(code **)(**(int **)((int)this + 0x90) + 0xc))(*(int **)((int)this + 0x90));
    *(int *)((int)this + 0x94) = iVar4;
    if ((iVar4 == -0x7789f797) || (iVar4 == 0)) {
      FUN_50408e5b();
      iVar4 = (**(code **)(**(int **)((int)this + 0x90) + 0x38))
                        (*(int **)((int)this + 0x90),
                         -(uint)(this != (void *)0xffffffe0) & (int)this + 0x30U);
      *(int *)((int)this + 0x94) = iVar4;
      if (-1 < iVar4) {
        if (*(int *)((int)this + 0x4c) != 0) {
          (**(code **)(**(int **)((int)this + 0x1c) + 0x20))
                    (*(int **)((int)this + 0x1c),0,(int)this + 0x7c);
        }
        if (*(int *)((int)this + 0x28) == 0) {
          *(undefined4 *)((int)this + 0x28) = 0x3c;
        }
        uVar6 = __alldiv(*(uint *)((int)this + 0x338),*(uint *)((int)this + 0x33c),
                         *(uint *)((int)this + 0x28),0);
        *(undefined8 *)((int)this + 0x340) = uVar6;
        *(undefined4 *)((int)this + 0x32c) = 1;
        *(undefined4 *)((int)this + 0x334) = 1;
        *(undefined4 *)((int)this + 0x330) = 1;
        uVar3 = DAT_5043904c;
        uVar2 = DAT_50439048;
        uVar1 = DAT_50439044;
        uVar5 = DAT_50439040;
        if (*(int *)((int)this + 0xc0) == 0) {
          FUN_5042a358(0x80004003);
        }
        (**(code **)(**(int **)((int)this + 0xc0) + 0x8c))
                  (*(int **)((int)this + 0xc0),(int)this + 0xc4,(int)this + 200,0,0,0,0,0,0,uVar5,
                   uVar1,uVar2,uVar3);
        *(uint *)((int)this + 0xc4) = ~*(uint *)((int)this + 0xc4);
        *(uint *)((int)this + 200) = ~*(uint *)((int)this + 200);
        FUN_50408c81((int)this);
        FUN_50403dd1((int)this);
        FUN_50408e66();
        goto LAB_50408ff1;
      }
    }
    (*DAT_50438af4)(100);
    uVar5 = 0;
  }
  else {
LAB_50408ff1:
    uVar5 = 1;
  }
  return uVar5;
}


