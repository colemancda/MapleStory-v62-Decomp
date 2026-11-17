/* FUN_006fd57f - 0x006fd57f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_006fd57f(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x18) = extraout_ECX;
  FUN_00789e42(6,3,0xe3,6,1,0,0);
  DAT_0097bdc0 = -(uint)(extraout_ECX != (undefined4 *)0xfffffa88) & (uint)extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x15f] = 0;
  extraout_ECX[0x161] = 0;
  extraout_ECX[0x168] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0087b2f0(extraout_ECX + 0x169,4,4,&LAB_00450362,FUN_004115cc);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0087b2f0(extraout_ECX + 0x16d,4,4,&LAB_0045e0d1,FUN_0044973c);
  extraout_ECX[0x171] = 0;
  extraout_ECX[0x172] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_0087b2f0(extraout_ECX + 0x173,4,3,&LAB_00705b79,&LAB_00705b7f);
  extraout_ECX[0x177] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_0087b2f0(extraout_ECX + 0x178,4,3,&LAB_00705bce,thunk_FUN_0064961c);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_0087b2f0(extraout_ECX + 0x17b,4,3,&LAB_00705bce,thunk_FUN_0064961c);
  extraout_ECX[0x17f] = 0;
  extraout_ECX[0x180] = 0x1f;
  extraout_ECX[0x181] = 0;
  extraout_ECX[0x17e] = &PTR_FUN_008ecb0c;
  extraout_ECX[0x182] = 100;
  extraout_ECX[0x183] = 0x18;
  extraout_ECX[0x163] = 0xffffffff;
  extraout_ECX[0x167] = 0xffffffff;
  piVar1 = extraout_ECX + 0x15c;
  uVar2 = extraout_ECX[0x155];
  *extraout_ECX = &PTR_FUN_008f0640;
  extraout_ECX[1] = &PTR_FUN_008f05f4;
  extraout_ECX[2] = &PTR_FUN_008f05f0;
  extraout_ECX[0x166] = 0;
  extraout_ECX[0x165] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_0047c9a4(uVar2,unaff_EBP + -0x14,unaff_EBP + -0x10,piVar1,extraout_ECX + 0x15d);
  iVar3 = *piVar1;
  uVar2 = *(undefined4 *)(unaff_EBP + -0x10);
  uVar4 = *(undefined4 *)(unaff_EBP + -0x14);
  *piVar1 = iVar3 % 3;
  extraout_ECX[0x162] = iVar3 % 3;
  FUN_0081420c(uVar4,uVar2,0xf5,0x121,10,1,0,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


