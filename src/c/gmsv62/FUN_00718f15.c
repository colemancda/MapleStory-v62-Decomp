/* FUN_00718f15 - 0x00718f15 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00718f15(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  FUN_004bc8b4();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1f] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0087b2f0(extraout_ECX + 0x20,8,8,ptr_0045e147,thunk_FUN_00450463);
  extraout_ECX[0x31] = 0;
  extraout_ECX[0x33] = 0;
  extraout_ECX[0x36] = 0;
  extraout_ECX[0x37] = 0;
  extraout_ECX[0x38] = 0;
  extraout_ECX[0x34] = &PTR_FUN_008f0ce0;
  extraout_ECX[0x39] = 0;
  extraout_ECX[0x3b] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_0074b9b2();
  extraout_ECX[0x179] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  *extraout_ECX = &PTR_FUN_008f0ca4;
  extraout_ECX[1] = &PTR_LAB_008f0c58;
  extraout_ECX[2] = &PTR_FUN_008f0c54;
  puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0xde0);
  uVar1 = *puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_004bc5f0(uVar1,1,0);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00402676();
  FUN_0071bce6();
  FUN_0071ba3c(*(undefined4 *)(unaff_EBP + 0xc));
  extraout_ECX[0x176] = *(undefined4 *)(unaff_EBP + 8);
  iVar2 = *(int *)(unaff_EBP + 0xc);
  extraout_ECX[0x177] = 0;
  extraout_ECX[0x178] = *(int *)(iVar2 + 8) + 7U >> 3;
  FUN_0071b38c();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


