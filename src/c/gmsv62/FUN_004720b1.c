/* FUN_004720b1 - 0x004720b1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_004720b1(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  int local_20;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(extraout_ECX + 4) = 0;
  *(undefined4 *)(extraout_ECX + 8) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if ((*(char **)(unaff_EBP + 0xc) == (char *)0x0) || (**(char **)(unaff_EBP + 0xc) == '\0')) {
    if (**(int **)(unaff_EBP + 8) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(**(int **)(unaff_EBP + 8) + -4);
    }
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      local_20 = iVar1;
      uVar2 = FUN_004726fc();
      *(int **)(unaff_EBP + -0x1c) = &local_20;
      local_20 = 0;
      FUN_00414f8b(uVar2);
      local_20 = FUN_0047252b(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      local_20 = 0x472156;
      FUN_00414ebb();
      if ((*(char **)(unaff_EBP + -0x10) != (char *)0x0) && (**(char **)(unaff_EBP + -0x10) != '\0')
         ) {
        *(int **)(unaff_EBP + -0x1c) = &local_20;
        local_20 = 0;
        FUN_00414f8b(unaff_EBP + -0x10);
        FUN_0047225f();
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      local_20 = 0x472185;
      FUN_00414ebb();
    }
  }
  else {
    *(int **)(unaff_EBP + -0x14) = &local_20;
    local_20 = 0;
    FUN_00414f8b(unaff_EBP + 0xc);
    FUN_0047225f();
  }
  local_20 = *(int *)(unaff_EBP + 8);
  FUN_004725b8();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_20 = 0x47219f;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


