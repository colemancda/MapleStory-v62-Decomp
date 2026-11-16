/* FUN_50404037 - 0x50404037 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


int FUN_50404037(int *param_1,short param_2,undefined4 param_3,void *param_4,undefined4 param_5,
                int *param_6,int param_7,void *param_8)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  void *_Src;
  int iVar4;
  undefined4 local_30 [4];
  undefined4 local_20;
  undefined4 local_1c;
  int local_10;
  int local_c;
  int local_8;
  
  piVar3 = param_1;
  if (param_2 == 0x4013) {
    if (param_4 == (void *)0x0) {
      return -0x7fffbffd;
    }
    if ((int *)(param_1[8] * param_1[9] * 4) <= param_6) {
      piVar1 = (int *)param_1[0x24];
      if (piVar1 == (int *)0x0) {
        return -0x7fffbffb;
      }
      local_30[0] = 0;
      (**(code **)(*piVar1 + 0x24))(piVar1,local_30);
      local_1c = 0;
      local_20 = 0;
      param_6 = (int *)0x0;
      (**(code **)(*(int *)piVar3[0x24] + 0x18))((int *)piVar3[0x24],&param_6);
      if (param_6 != (int *)0x0) {
        (**(code **)(*param_6 + 0x20))(param_6,local_30[0],&local_20);
        (**(code **)(*param_6 + 8))(param_6);
        param_6 = (int *)0x0;
      }
      param_1 = (int *)0x0;
      local_8 = (**(code **)(*(int *)piVar3[0x24] + 0x6c))
                          ((int *)piVar3[0x24],local_20,local_1c,0x15,&param_1);
      if (local_8 < 0) {
        return local_8;
      }
      local_8 = (**(code **)(*(int *)piVar3[0x24] + 0x78))((int *)piVar3[0x24],param_1);
      if ((-1 < local_8) &&
         (local_8 = (**(code **)(*param_1 + 0x24))(param_1,&local_10,0,0x8010), -1 < local_8)) {
        iVar2 = piVar3[8];
        _Src = (void *)(local_c + local_10 * (int)param_8 + param_7 * 4);
        param_8 = param_4;
        for (iVar4 = piVar3[9]; iVar4 != 0; iVar4 = iVar4 + -1) {
          memcpy(param_8,_Src,iVar2 * 4);
          _Src = (void *)((int)_Src + local_10);
          param_8 = (void *)((int)param_8 + iVar2 * 4);
        }
        (**(code **)(*param_1 + 0x28))(param_1);
      }
      (**(code **)(*param_1 + 8))(param_1);
      return local_8;
    }
  }
  return -0x7ff8ffa9;
}


