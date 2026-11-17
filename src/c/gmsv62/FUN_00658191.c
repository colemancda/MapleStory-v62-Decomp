/* FUN_00658191 - 0x00658191 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00658191(int *param_1,uint param_2)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar1 = param_2;
  if ((param_2 < 1000) || (0x3f1 < param_2)) {
    if ((param_2 < 0x3f2) || (0x405 < param_2)) {
      if (param_2 == 1) {
        iVar3 = FUN_0065869b();
        if (iVar3 == 0) {
          return;
        }
      }
      else {
        if (param_2 == 0x406) {
          FUN_004a15ce(0);
          FUN_004a598a();
          FUN_00817f6e(-(uint)(param_1[0x1c0] != 0) & param_1[0x1c0] + 4U);
        }
        else if (param_2 == 0x407) goto LAB_00658241;
        if (uVar1 != 1) {
          if (uVar1 != 2) {
            return;
          }
          iVar3 = *param_1;
          uVar4 = 2;
          goto LAB_006582b6;
        }
      }
      iVar3 = *param_1;
      uVar4 = 1;
LAB_006582b6:
      (**(code **)(iVar3 + 0x34))(uVar4);
      return;
    }
    if ((param_2 != 0x3fb) && (param_2 != 0x405)) {
      uVar2 = FUN_004a5922();
      param_2 = CONCAT31(param_2._1_3_,uVar2);
      iVar3 = FUN_00658606(uVar1,&param_2,0x3fb < uVar1);
      if (iVar3 != 0) {
        FUN_004a598a();
      }
      FUN_004a58cd(param_2);
      iVar3 = param_1[0x1c0];
      goto LAB_0065824a;
    }
  }
  else {
    FUN_004a598a();
    FUN_004a58cd((char)uVar1 + 'H');
  }
LAB_00658241:
  FUN_004a598a();
  iVar3 = param_1[0x1c0];
LAB_0065824a:
  FUN_00817f6e(-(uint)(iVar3 != 0) & iVar3 + 4U);
  return;
}


