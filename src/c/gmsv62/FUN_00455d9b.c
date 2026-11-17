/* FUN_00455d9b - 0x00455d9b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00455d9b(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  int local_14;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  local_14 = 0x455db8;
  FUN_004bc4fa();
  extraout_ECX[0x1d] = 0;
  extraout_ECX[0x1e] = *(undefined4 *)(unaff_EBP + 0xc);
  extraout_ECX[0x1f] = *(undefined4 *)(unaff_EBP + 0x10);
  if (**(int **)(unaff_EBP + 0x14) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(**(int **)(unaff_EBP + 0x14) + -4);
  }
  extraout_ECX[0x20] = uVar2;
  extraout_ECX[0x21] = 0;
  extraout_ECX[0x23] = 0;
  extraout_ECX[0x25] = 0;
  extraout_ECX[0x27] = 0;
  extraout_ECX[0x29] = 0;
  extraout_ECX[0x2b] = 0;
  iVar1 = extraout_ECX[0x1e];
  *(undefined1 *)(unaff_EBP + -4) = 8;
  extraout_ECX[0x2c] = *(undefined4 *)(unaff_EBP + 0x18);
  *extraout_ECX = &PTR_FUN_008e9480;
  extraout_ECX[1] = &PTR_FUN_008e9434;
  extraout_ECX[2] = &PTR_FUN_008e9430;
  if (iVar1 != 3) {
    local_14 = unaff_EBP + 0xf;
    FUN_0045f36d(extraout_ECX[0x20]);
    iVar1 = extraout_ECX[0x20];
    *(undefined4 *)(unaff_EBP + 0x10) = 0;
    if (0 < iVar1) {
      do {
        local_14 = **(int **)(unaff_EBP + 0x14) + *(int *)(unaff_EBP + 0x10) * 8;
        FUN_0045e10e();
        *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 1;
      } while (*(int *)(unaff_EBP + 0x10) < (int)extraout_ECX[0x20]);
    }
  }
  *(int **)(unaff_EBP + 0x14) = &local_14;
  local_14 = 0;
  FUN_00414f8b(unaff_EBP + 8);
  FUN_007d2b71(extraout_ECX + 0x1d);
  local_14 = 0;
  FUN_004bc5b8(0,0,1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_14 = 0x455ea0;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


