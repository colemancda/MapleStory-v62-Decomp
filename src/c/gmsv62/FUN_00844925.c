/* FUN_00844925 - 0x00844925 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00844925(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  FUN_004bc4fa();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0087b2f0(extraout_ECX + 0x1d,4,2,&LAB_00450362,FUN_004115cc);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0087b2f0(extraout_ECX + 0x1f,4,2,&LAB_00450362,FUN_004115cc);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0087b2f0(extraout_ECX + 0x21,4,2,&LAB_0045e0d1,FUN_0044973c);
  extraout_ECX[0x24] = 0;
  extraout_ECX[0x26] = 0;
  extraout_ECX[0x28] = 0;
  extraout_ECX[0x2a] = 0;
  extraout_ECX[0x2c] = 0;
  extraout_ECX[0x2e] = 0;
  extraout_ECX[0x30] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  *extraout_ECX = &PTR_FUN_008f34e0;
  extraout_ECX[1] = &PTR_FUN_008f3494;
  extraout_ECX[2] = &PTR_FUN_008f3490;
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0x73a);
  uVar1 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_004bc5f0(uVar1,1,0);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


