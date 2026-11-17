/* FUN_00827c8a - 0x00827c8a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00827c8a(void)

{
  int iVar1;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = FUN_004029b9(0x140);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 != 0) {
    FUN_00828531();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar1 = FUN_0054e74a();
  if (iVar1 == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0x22000006;
    *(undefined4 *)(unaff_EBP + -0x10) = 0x22000006;
    *(undefined4 *)(unaff_EBP + -4) = 1;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x10,&DAT_008f7260);
  }
  FUN_005d90cb();
  FUN_005e2551();
  FUN_0068263f();
  FUN_005f3a50();
  FUN_0061a54b();
  FUN_0063845f();
  FUN_004d654d();
  iVar1 = FUN_004029b9(0x80);
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  if (iVar1 != 0) {
    FUN_00827e03();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar1 = FUN_0064d011();
  if (iVar1 == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0x22000006;
    *(undefined4 *)(unaff_EBP + -0x10) = 0x22000006;
    *(undefined4 *)(unaff_EBP + -4) = 3;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x10,&DAT_008f7260);
  }
  iVar1 = FUN_00650e90();
  if (iVar1 == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0x22000006;
    *(undefined4 *)(unaff_EBP + -0x10) = 0x22000006;
    *(undefined4 *)(unaff_EBP + -4) = 4;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x10,&DAT_008f7260);
  }
  iVar1 = FUN_00651efa();
  if (iVar1 == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0x22000006;
    *(undefined4 *)(unaff_EBP + -0x10) = 0x22000006;
    *(undefined4 *)(unaff_EBP + -4) = 5;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x10,&DAT_008f7260);
  }
  iVar1 = FUN_00652384();
  if (iVar1 == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0x22000006;
    *(undefined4 *)(unaff_EBP + -0x10) = 0x22000006;
    *(undefined4 *)(unaff_EBP + -4) = 6;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x10,&DAT_008f7260);
  }
  FUN_0066f95e();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


