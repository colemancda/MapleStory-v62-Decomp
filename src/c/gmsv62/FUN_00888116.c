/* FUN_00888116 - 0x00888116 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint FUN_00888116(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  undefined4 uVar4;
  undefined1 local_7c [120];
  
  iVar1 = FUN_00888707(param_1);
  iVar2 = (*DAT_0098092c)(iVar1,(-(uint)(DAT_00980910 != 0) & 0xfffff005) + 0x1002,local_7c,0x78);
  if (iVar2 == 0) {
    DAT_00980924 = 0;
    return 1;
  }
  iVar2 = FUN_008858f0(DAT_00980920,local_7c);
  if (iVar2 == 0) {
    iVar2 = (*DAT_0098092c)(iVar1,(-(uint)(DAT_00980918 != 0) & 0xfffff002) + 0x1001,local_7c,0x78);
    if (iVar2 == 0) {
      DAT_00980924 = 0;
      return 1;
    }
    iVar2 = FUN_008858f0(DAT_0098091c,local_7c);
    if (iVar2 == 0) {
      DAT_00980924 = DAT_00980924 | 0x304;
      DAT_00980928 = iVar1;
LAB_008881bc:
      DAT_0098090c = iVar1;
    }
    else if ((DAT_00980924 & 2) == 0) {
      if ((DAT_00980914 == 0) ||
         (iVar2 = FUN_0087d0b0(DAT_0098091c,local_7c,DAT_00980914), iVar2 != 0)) {
        if (((DAT_00980924 & 1) == 0) && (iVar2 = FUN_0088856a(iVar1), iVar2 != 0)) {
          DAT_00980924 = DAT_00980924 | 1;
          DAT_00980928 = iVar1;
        }
      }
      else {
        DAT_00980924 = DAT_00980924 | 2;
        DAT_00980928 = iVar1;
        sVar3 = _strlen(DAT_0098091c);
        if (sVar3 == DAT_00980914) goto LAB_008881bc;
      }
    }
  }
  if ((DAT_00980924 & 0x300) == 0x300) goto LAB_00888306;
  iVar2 = (*DAT_0098092c)(iVar1,(-(uint)(DAT_00980918 != 0) & 0xfffff002) + 0x1001,local_7c,0x78);
  if (iVar2 == 0) {
    DAT_00980924 = 0;
    return 1;
  }
  iVar2 = FUN_008858f0(DAT_0098091c,local_7c);
  if (iVar2 == 0) {
    DAT_00980924 = DAT_00980924 | 0x200;
    if (((DAT_00980918 == 0) && (DAT_00980914 != 0)) &&
       (sVar3 = _strlen(DAT_0098091c), sVar3 == DAT_00980914)) {
      uVar4 = 1;
      goto LAB_008882e5;
    }
  }
  else {
    if (((DAT_00980918 != 0) || (DAT_00980914 == 0)) ||
       (iVar2 = FUN_0087d0b0(DAT_0098091c,local_7c,DAT_00980914), iVar2 != 0)) goto LAB_00888306;
    uVar4 = 0;
LAB_008882e5:
    iVar2 = FUN_00888589(iVar1,uVar4);
    if (iVar2 == 0) goto LAB_00888306;
  }
  DAT_00980924 = DAT_00980924 | 0x100;
  if (DAT_0098090c == 0) {
    DAT_0098090c = iVar1;
  }
LAB_00888306:
  return ~DAT_00980924 >> 2 & 1;
}


