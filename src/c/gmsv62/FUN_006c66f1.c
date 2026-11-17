/* FUN_006c66f1 - 0x006c66f1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006c66f1(void)

{
  int iVar1;
  uint uVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_006b0ec7(extraout_ECX);
  iVar1 = _memcmp((void *)(DAT_00979110 + 0x1c1),(void *)(DAT_00979110 + 4),0x1bd);
  if ((iVar1 != 0) && (*(int *)(extraout_ECX + 0xb90) == 0)) {
    iVar1 = FUN_004029b9(0x84);
    *(int *)(unaff_EBP + -0x10) = iVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_006c9460(extraout_ECX,2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uVar2 = -(uint)(iVar1 != 0) & iVar1 + 8U;
    *(uint *)(unaff_EBP + -0x14) = -(uint)(uVar2 != 0) & uVar2 - 8;
    FUN_006c97e8();
    *(undefined4 *)(unaff_EBP + -4) = 1;
    iVar1 = FUN_004bc6a2();
    if (iVar1 == 1) {
      FUN_0051c175();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_006c9805();
  }
  FUN_0078a218();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


