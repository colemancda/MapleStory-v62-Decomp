/* FUN_00888370 - 0x00888370 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint FUN_00888370(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_7c [120];
  
  uVar1 = FUN_00888707(param_1);
  iVar2 = (*DAT_0098092c)(uVar1,(-(uint)(DAT_00980918 != 0) & 0xfffff002) + 0x1001,local_7c,0x78);
  if (iVar2 == 0) {
    DAT_00980924 = 0;
    return 1;
  }
  iVar2 = FUN_008858f0(DAT_0098091c,local_7c);
  if (iVar2 == 0) {
    if (DAT_00980918 == 0) {
      uVar3 = 1;
      goto LAB_008883fc;
    }
  }
  else {
    if (((DAT_00980918 != 0) || (DAT_00980914 == 0)) ||
       (iVar2 = FUN_0087d0b0(DAT_0098091c,local_7c,DAT_00980914), iVar2 != 0)) goto LAB_0088841b;
    uVar3 = 0;
LAB_008883fc:
    iVar2 = FUN_00888589(uVar1,uVar3);
    if (iVar2 == 0) goto LAB_0088841b;
  }
  DAT_00980924 = DAT_00980924 | 4;
  DAT_0098090c = uVar1;
  DAT_00980928 = uVar1;
LAB_0088841b:
  return ~DAT_00980924 >> 2 & 1;
}


