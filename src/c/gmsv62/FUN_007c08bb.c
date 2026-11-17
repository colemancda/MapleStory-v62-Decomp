/* FUN_007c08bb - 0x007c08bb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007c08bb(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar1 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + 8) = uVar1;
  iVar2 = FUN_007c18ca(unaff_EBP + 8);
  if (iVar2 != 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_007c15b4(iVar2 + 0xc);
    FUN_007c1070(*(int *)(*(int *)(unaff_EBP + -0x10) + 0x10) + 0x1778);
    FUN_007c11eb(*(int *)(*(int *)(unaff_EBP + -0x10) + 0x10) + 0x17e0);
    FUN_007c1325(*(undefined4 *)(*(int *)(*(int *)(unaff_EBP + -0x10) + 0x10) + 0xd78));
    FUN_007c1946(*(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x14));
    FUN_007c180b(iVar2 + 8);
    iVar2 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x18);
    if (iVar2 != 0) {
      FUN_007c1c5a(iVar2);
    }
    if (DAT_0097beec != 0) {
      FUN_00815de9();
      FUN_0077fcef();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_004f6e32(0);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


