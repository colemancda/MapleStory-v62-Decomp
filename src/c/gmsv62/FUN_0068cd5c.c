/* FUN_0068cd5c - 0x0068cd5c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0068cd5c(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *extraout_ECX;
  undefined4 *puVar4;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x18) = extraout_ECX;
  FUN_005c0182();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x5f] = 0;
  extraout_ECX[0x61] = 0;
  extraout_ECX[99] = 0;
  extraout_ECX[0x65] = 0;
  extraout_ECX[0x67] = 0;
  extraout_ECX[0x68] = 0;
  extraout_ECX[0x69] = 0;
  extraout_ECX[0x6a] = 0;
  puVar4 = extraout_ECX + 0x6d;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  extraout_ECX[0x6b] = 0;
  extraout_ECX[0x6c] = 0;
  FUN_0087b2f0(puVar4,4,2,&LAB_0068ea45,&LAB_0068ea4b);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_0074b9b2();
  *extraout_ECX = &PTR_FUN_008eea50;
  extraout_ECX[1] = &PTR_FUN_008eea04;
  extraout_ECX[2] = &PTR_FUN_008eea00;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_008320df(0);
  puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x14,0x71d);
  uVar2 = *puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_004bc5f0(uVar2,1,0);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -0x14) = 2;
  do {
    puVar4[2] = 0;
    FUN_0068ea8c(9,unaff_EBP + -0xd);
    puVar4 = puVar4 + 1;
    piVar1 = (int *)(unaff_EBP + -0x14);
    *piVar1 = *piVar1 + -1;
  } while (*piVar1 != 0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


