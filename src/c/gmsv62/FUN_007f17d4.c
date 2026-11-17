/* FUN_007f17d4 - 0x007f17d4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007f17d4(void)

{
  undefined4 uVar1;
  int extraout_ECX;
  int iVar2;
  int unaff_EBP;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  FUN_00879bb8();
  puVar3 = (undefined4 *)(extraout_ECX + 0x20);
  puVar4 = (undefined4 *)(extraout_ECX + 0x80);
  for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)(extraout_ECX + 400) = *(undefined4 *)(DAT_00978138 + 0xac);
  uVar1 = (**(code **)(**(int **)(extraout_ECX + 0x14) + 0xc))(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_007f4541(uVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_004d2023(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0x1e;
}


