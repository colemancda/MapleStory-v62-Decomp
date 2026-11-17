/* FUN_0070a3b3 - 0x0070a3b3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0070a3b3(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  DWORD DVar3;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_00789e42(0x10,0,0xffffffff,0xffffffff,1,0,0);
  extraout_ECX[0x15e] = *(undefined4 *)(unaff_EBP + 0x10);
  extraout_ECX[0x15f] = *(undefined4 *)(unaff_EBP + 0x14);
  extraout_ECX[0x160] = 0;
  extraout_ECX[0x161] = 0;
  extraout_ECX[0x164] = 0;
  extraout_ECX[0x165] = 0;
  extraout_ECX[0x166] = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x168] = 0;
  extraout_ECX[0x16a] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0087b2f0(extraout_ECX + 0x16b,4,4,&LAB_00450362,FUN_004115cc);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  *extraout_ECX = &PTR_FUN_008f08b0;
  extraout_ECX[1] = &PTR_FUN_008f0864;
  extraout_ECX[2] = &PTR_FUN_008f0860;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  FUN_0070b251();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0070b1bb(unaff_EBP + -0x18);
  *(undefined2 *)extraout_ECX[0x168] = *(undefined2 *)(unaff_EBP + 8);
  *(undefined4 *)(extraout_ECX[0x168] + 8) = *(undefined4 *)(unaff_EBP + 0xc);
  DVar3 = timeGetTime();
  uVar1 = *(undefined4 *)(unaff_EBP + 0x14);
  uVar2 = *(undefined4 *)(unaff_EBP + 0x10);
  extraout_ECX[0x165] = DVar3;
  extraout_ECX[0x162] = 0;
  extraout_ECX[0x163] = 0;
  FUN_0081420c(uVar2,uVar1,0x34,0xc,10,1,0,0);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_0070b2b7(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


