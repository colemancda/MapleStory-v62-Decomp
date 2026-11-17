/* FUN_005733a5 - 0x005733a5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_005733a5(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004de520();
  DAT_00979418 = -(uint)(extraout_ECX + 0x33 != (int *)0x0) & (uint)extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x35] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0087b2f0(extraout_ECX + 0x37,4,2,&LAB_0048c051,FUN_00411629);
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar2 = *(int *)(unaff_EBP + 0xc);
  extraout_ECX[0x33] = iVar1;
  extraout_ECX[0x34] = iVar2;
  *extraout_ECX = &PTR_FUN_008ebf0c;
  extraout_ECX[1] = &PTR_FUN_008ebec0;
  extraout_ECX[2] = &PTR_FUN_008ebebc;
  piVar3 = (int *)(*(int *)(iVar1 + 0x110) + iVar2 * 0x10);
  iVar1 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if ((iVar1 == 0) || (piVar3[2] == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  extraout_ECX[0x36] = uVar4;
  FUN_004de5cc(0,0xff,0,0x94,0xfffffd3a,0x94,0xfffffd3a,0x94,0xfffffd3a,0x50,0,0x50);
  FUN_004de636(0xaa,0xd2,0,0xb,0,0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


