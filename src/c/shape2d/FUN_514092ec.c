/* FUN_514092ec - 0x514092ec in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_514092ec(void *this,uint param_1,int param_2)

{
  void *pvVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  double local_2c;
  double local_24;
  double local_1c;
  double local_14;
  void *local_c;
  void *local_8;
  
  local_8 = this;
  if (0 < param_2) {
    pvVar1 = (void *)((int)this + 8);
    local_c = pvVar1;
    FUN_51409cf6((int)pvVar1);
    while (param_1 <= param_2 * 0x10 + -0x10 + param_1) {
      FUN_51409cb8(pvVar1);
      FUN_514093dc();
    }
    uVar4 = *(uint *)((int)local_8 + 0x14);
    if (*(uint *)((int)local_8 + 0x14) != 0) {
      while (uVar3 = -(uint)(*(int *)(uVar4 - 0xc) != 0) & *(int *)(uVar4 - 0xc) + 0x10U, uVar3 != 0
            ) {
        dVar2 = (double)(*(int *)(uVar3 + 0x38) - *(int *)(uVar4 + 0x38)) * _DAT_5140d9a0;
        if (_DAT_5140d8c8 < dVar2) {
          local_1c = dVar2 * *(double *)(uVar4 + 0x28);
          local_14 = dVar2 * *(double *)(uVar4 + 0x30);
          *(double *)(uVar4 + 8) = local_1c;
          *(double *)(uVar4 + 0x10) = local_14;
          local_2c = dVar2 * *(double *)(uVar3 + 0x28);
          local_24 = dVar2 * *(double *)(uVar3 + 0x30);
          *(double *)(uVar4 + 0x18) = local_2c;
          *(double *)(uVar4 + 0x20) = local_24;
          uVar4 = uVar3;
        }
        else {
          FUN_5140455a(local_c,uVar4);
          uVar4 = uVar3;
        }
      }
    }
    return;
  }
  FUN_51405a7c(&local_2c,0x8002000e,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&local_2c,(ThrowInfo *)&DAT_5140e068);
}


