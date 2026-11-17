/* FUN_00787521 - 0x00787521 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00787521(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *extraout_ECX = *puVar1;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = 0;
  FUN_00414f8b(puVar1 + 1);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[2] = 0;
  FUN_00414f8b(puVar1 + 2);
  extraout_ECX[3] = puVar1[3];
  extraout_ECX[4] = puVar1[4];
  extraout_ECX[5] = puVar1[5];
  extraout_ECX[6] = puVar1[6];
  extraout_ECX[7] = puVar1[7];
  extraout_ECX[8] = puVar1[8];
  extraout_ECX[9] = puVar1[9];
  iVar2 = *(int *)(unaff_EBP + 8);
  extraout_ECX[10] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414f8b(iVar2 + 0x28);
  iVar3 = *(int *)(unaff_EBP + 8);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0xb] = *(undefined4 *)(iVar2 + 0x2c);
  extraout_ECX[0xc] = *(undefined4 *)(iVar2 + 0x30);
  extraout_ECX[0xd] = *(undefined4 *)(iVar2 + 0x34);
  extraout_ECX[0xe] = *(undefined4 *)(iVar2 + 0x38);
  extraout_ECX[0xf] = *(undefined4 *)(iVar3 + 0x3c);
  return extraout_ECX;
}


