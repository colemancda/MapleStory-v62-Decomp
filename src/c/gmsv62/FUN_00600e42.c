/* FUN_00600e42 - 0x00600e42 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00600e42(void)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[2] = 0;
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *extraout_ECX = *puVar2;
  extraout_ECX[1] = 2;
  uVar1 = *(undefined2 *)(puVar2 + 3);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar3 = FUN_00475c07(uVar1,unaff_EBP + 0xb);
  FUN_00879c20(uVar3,puVar2[2],*(undefined2 *)(puVar2 + 3));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined2 *)(extraout_ECX + 3) = *(undefined2 *)(puVar2 + 3);
  *(undefined2 *)((int)extraout_ECX + 0xe) = *(undefined2 *)((int)puVar2 + 0xe);
  *(undefined2 *)(extraout_ECX + 4) = *(undefined2 *)(puVar2 + 4);
  extraout_ECX[5] = puVar2[5];
  puVar2[1] = 0;
  *(undefined2 *)(puVar2 + 3) = 0;
  puVar2[5] = 0;
  return extraout_ECX;
}


