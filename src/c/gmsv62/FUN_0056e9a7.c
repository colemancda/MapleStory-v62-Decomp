/* FUN_0056e9a7 - 0x0056e9a7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0056e9a7(void)

{
  int iVar1;
  undefined4 *extraout_ECX;
  int *piVar2;
  int iVar3;
  int iVar4;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004de520();
  DAT_00979420 = -(uint)(extraout_ECX + 0x33 != (int *)0x0) & (uint)extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x36] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0087b2f0(extraout_ECX + 0x38,4,2,&LAB_0048c051,FUN_00411629);
  iVar1 = *(int *)(unaff_EBP + 0xc);
  iVar3 = *(int *)(unaff_EBP + 8);
  extraout_ECX[0x33] = iVar3;
  *extraout_ECX = &PTR_FUN_008ebdf4;
  extraout_ECX[1] = &PTR_FUN_008ebda8;
  extraout_ECX[2] = &PTR_FUN_008ebda4;
  extraout_ECX[0x34] = iVar1;
  piVar2 = (int *)(*(int *)(iVar3 + 0x168) + iVar1 * 0x10);
  iVar3 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if ((iVar3 == 0) || (piVar2[2] == 0)) {
    iVar3 = 0;
  }
  else {
    iVar3 = 1;
  }
  extraout_ECX[0x37] = iVar3;
  extraout_ECX[0x35] = 0;
  iVar4 = (iVar1 % 3) * 0x82 + -0xdc;
  iVar1 = -0x544 - (-(uint)(iVar3 != 0) & 0x24);
  FUN_004de5cc(0,0xff,0,iVar4,iVar1,iVar4,iVar1,iVar4,iVar1,0x50,0,0x50);
  FUN_004de636(0xb7,(-(extraout_ECX[0x37] != 0) & 0x24U) + 0x73,0,0x14,0,0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


