/* ptr_00888189 - 0x00888189 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint ptr_00888189(void)

{
  int iVar1;
  size_t sVar2;
  int unaff_EBP;
  int unaff_ESI;
  
  iVar1 = (*DAT_0098092c)();
  if (iVar1 == 0) {
    DAT_00980924 = 0;
    return 1;
  }
  iVar1 = FUN_008858f0(DAT_0098091c,unaff_EBP + -0x78);
  if (iVar1 == 0) {
    DAT_00980924 = DAT_00980924 | 0x304;
    DAT_00980928 = unaff_ESI;
LAB_008881bc:
    DAT_0098090c = unaff_ESI;
  }
  else if ((DAT_00980924 & 2) == 0) {
    if ((DAT_00980914 == 0) ||
       (iVar1 = FUN_0087d0b0(DAT_0098091c,unaff_EBP + -0x78,DAT_00980914), iVar1 != 0)) {
      if (((DAT_00980924 & 1) == 0) && (iVar1 = FUN_0088856a(), iVar1 != 0)) {
        DAT_00980924 = DAT_00980924 | 1;
        DAT_00980928 = unaff_ESI;
      }
    }
    else {
      DAT_00980924 = DAT_00980924 | 2;
      DAT_00980928 = unaff_ESI;
      sVar2 = _strlen(DAT_0098091c);
      if (sVar2 == DAT_00980914) goto LAB_008881bc;
    }
  }
  if ((DAT_00980924 & 0x300) == 0x300) goto LAB_00888306;
  iVar1 = (*DAT_0098092c)();
  if (iVar1 == 0) {
    DAT_00980924 = 0;
    return 1;
  }
  iVar1 = FUN_008858f0(DAT_0098091c,unaff_EBP + -0x78);
  if (iVar1 == 0) {
    DAT_00980924 = DAT_00980924 | 0x200;
    if (((DAT_00980918 == 0) && (DAT_00980914 != 0)) &&
       (sVar2 = _strlen(DAT_0098091c), sVar2 == DAT_00980914)) goto LAB_008882e5;
  }
  else {
    if (((DAT_00980918 != 0) || (DAT_00980914 == 0)) ||
       (iVar1 = FUN_0087d0b0(DAT_0098091c,unaff_EBP + -0x78,DAT_00980914), iVar1 != 0))
    goto LAB_00888306;
LAB_008882e5:
    iVar1 = FUN_00888589();
    if (iVar1 == 0) goto LAB_00888306;
  }
  DAT_00980924 = DAT_00980924 | 0x100;
  if (DAT_0098090c == 0) {
    DAT_0098090c = unaff_ESI;
  }
LAB_00888306:
  return ~DAT_00980924 >> 2 & 1;
}


