/* FUN_006538e8 - 0x006538e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006538e8(int param_1,int param_2,undefined4 *param_3)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = 0;
  sVar1 = FUN_0045f084(param_1 + 0x39,*(undefined4 *)(param_1 + 0x3d));
  iVar2 = FUN_006545ca((int)sVar1,0xd3);
  if ((iVar2 != 0) && (iVar2 = FUN_00650dae(param_1,0x203231,&DAT_00979624), iVar2 != 0)) {
    iVar4 = FUN_006509a1(iVar2);
  }
  sVar1 = FUN_0045f084(param_1 + 0x39,*(undefined4 *)(param_1 + 0x3d));
  iVar2 = FUN_006545ca((int)sVar1,0xdd);
  if ((iVar2 != 0) && (iVar2 = FUN_00650dae(param_1,0x21b8d1,&DAT_00979620), iVar2 != 0)) {
    iVar4 = FUN_006509a1(iVar2);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 100;
  }
  if (iVar4 == 0) {
    return;
  }
  if (param_3 == (undefined4 *)0x0) goto LAB_00653a58;
  if (param_2 < 0x205d30) {
    if (param_2 < 0x205d2e) {
      if (param_2 < 0x20361f) {
        if ((param_2 != 0x20361e) &&
           ((param_2 < 0x1e886c ||
            ((0x1e886d < param_2 &&
             ((param_2 < 0x200f0c ||
              ((0x200f0d < param_2 && ((param_2 < 0x20361a || (0x20361b < param_2))))))))))))
        goto LAB_00653a58;
      }
      else if (param_2 != 0x205d29) {
        bVar5 = param_2 == 0x205d2b;
LAB_006539fb:
        if (!bVar5) goto LAB_00653a58;
      }
    }
  }
  else if (param_2 < 0x21e3ca) {
    if (param_2 != 0x21e3c9) {
      if (param_2 < 0x2195ac) goto LAB_00653a58;
      if (0x2195ad < param_2) {
        if (param_2 < 0x21bcba) goto LAB_00653a58;
        if (0x21bcbb < param_2) {
          bVar5 = param_2 == 0x21bcbe;
          goto LAB_006539fb;
        }
      }
    }
  }
  else if ((param_2 != 0x21e3cb) && ((param_2 < 0x21e3ce || (0x21e3cf < param_2))))
  goto LAB_00653a58;
  uVar3 = FUN_00413367(iVar4 + 0x13c,*(undefined4 *)(iVar4 + 0x144));
  *param_3 = uVar3;
LAB_00653a58:
  FUN_00413367(iVar4 + 0x148,*(undefined4 *)(iVar4 + 0x150));
  return;
}


