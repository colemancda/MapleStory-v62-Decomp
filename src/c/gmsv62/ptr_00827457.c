/* ptr_00827457 - 0x00827457 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00827457(void)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + -0x20) < 0) {
    puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x3c,0x8db);
    uVar1 = *puVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    uVar4 = (*DAT_0097b444)(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00414ebb();
    if ((uVar4 != 0xffffffff) && ((uVar4 & 0x10) != 0)) {
      if (*(int *)(unaff_EBP + -0x20) == -0x7ff8fffb) {
        *(undefined4 *)(unaff_EBP + -0x38) = 0x22000005;
        *(undefined4 *)(unaff_EBP + -0x68) = 0x22000005;
        *(undefined1 *)(unaff_EBP + -4) = 0x27;
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(unaff_EBP + -0x68,&DAT_008f7260);
      }
      if (*(int *)(unaff_EBP + -0x20) == -0x7ff8ffa9) {
        *(undefined4 *)(unaff_EBP + -0x38) = 0x22000003;
        *(undefined4 *)(unaff_EBP + -0x60) = 0x22000003;
        *(undefined1 *)(unaff_EBP + -4) = 0x28;
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(unaff_EBP + -0x60,&DAT_008f7260);
      }
      *(undefined4 *)(unaff_EBP + -0x38) = 0x22000004;
      *(undefined4 *)(unaff_EBP + -0x50) = 0x22000004;
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(unaff_EBP + -0x50,&DAT_008f7260);
    }
  }
  piVar2 = *(int **)(unaff_EBP + -0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


