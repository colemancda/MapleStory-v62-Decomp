/* ptr_00717a33 - 0x00717a33 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00717a33(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_c;
  
  FUN_00879bb8();
  iVar1 = *(int *)(unaff_EBP + 8);
  if (iVar1 == 2000) {
    if (*(int *)(extraout_ECX + 0xb0) == 0) {
      iStack_c = 1;
    }
    else {
LAB_00717abf:
      iStack_c = 0;
    }
  }
  else {
    if (iVar1 != 0x7d1) {
      if (iVar1 == 0x7d2) {
        iStack_c = unaff_EBP + 8;
        FUN_0048b998();
        FUN_0045b90e();
        *(undefined4 *)(unaff_EBP + -4) = 0;
        iStack_c = 0;
        uVar2 = FUN_004f136e();
        iStack_c = 0;
        *(int **)(unaff_EBP + -0x10) = &iStack_c;
        FUN_00414f8b(uVar2);
        FUN_00718d41();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iStack_c = 0x717aa7;
        FUN_00414ebb();
      }
      else if (iVar1 == 0x7d4) {
        iStack_c = 0x717a60;
        FUN_0083cb3e();
      }
      goto LAB_00717acc;
    }
    if (*(int *)(extraout_ECX + 0xb8) != 0) goto LAB_00717abf;
    iStack_c = 2;
  }
  FUN_00718149();
LAB_00717acc:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


