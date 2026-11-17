/* FUN_007bcedd - 0x007bcedd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_007bcedd(int *param_1)

{
  int *_Dst;
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_14 [4];
  int local_10;
  int local_c;
  int *local_8;
  
  _Dst = param_1 + 0x799;
  if (*_Dst != 0) {
    iVar1 = FUN_007d1e08();
    if (-1 < iVar1 - param_1[0x79a]) {
      local_8 = (int *)0x0;
      iVar1 = FUN_00455c59(local_14);
      local_c = *(undefined4 *)(iVar1 + 4);
      if (local_10 != 0) {
        FUN_0045e7c2(0);
      }
      local_c = FUN_00650dae(local_c,*_Dst,&local_8);
      if ((local_8 != (int *)0x0) && (local_c != 0)) {
        if (param_1[0x915] == 0) {
          _memset(_Dst,0,0xc);
          iVar1 = FUN_0043f6fe();
          if (-1 < iVar1) {
            (**(code **)(*param_1 + 0x3c))();
            (**(code **)(param_1[0x1e] + 0x10))(6,100,0);
          }
          if (*local_8 == 0x20361a) {
            FUN_007ab174(local_8,local_c,0,0);
          }
          else if (*local_8 == 0x404139) {
            FUN_007ba5ee(local_8,local_c,1);
          }
        }
        else {
          iVar1 = FUN_007d1e08();
          if (iVar1 - param_1[0x913] == local_8[8]) {
            (**(code **)(*param_1 + 4))();
            iVar1 = (**(code **)(*param_1 + 4))();
            local_c = FUN_00413367(iVar1 + 0x204,*(undefined4 *)(iVar1 + 0x20c));
            local_10 = FUN_00413367(param_1 + 0x12d,param_1[0x12f]);
            puVar2 = (undefined4 *)FUN_004c2648();
            uVar3 = FUN_00653336(local_10,0,local_c,*puVar2);
            FUN_0079305e(local_8,uVar3,1,0);
          }
        }
      }
    }
  }
  return;
}


