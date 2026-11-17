/* FUN_0047509a - 0x0047509a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0047509a(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_00475195();
  if (*(int *)(extraout_ECX + 0x14) == 0) {
    if (*(int *)(extraout_ECX + 0x90) == 0) {
      if (*(int *)(extraout_ECX + 0x24) != 0) {
        *(undefined4 *)(unaff_EBP + -0x14) = 0x22000002;
        *(undefined4 *)(unaff_EBP + -0x10) = 0x22000002;
        *(undefined4 *)(unaff_EBP + -4) = 0;
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(unaff_EBP + -0x10,&DAT_008f7260);
      }
      *(undefined4 *)(unaff_EBP + -0x14) = 0x21000002;
      *(undefined4 *)(unaff_EBP + -0x10) = 0x21000002;
      *(undefined4 *)(unaff_EBP + -4) = 1;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(unaff_EBP + -0x10,&DAT_00903698);
    }
    (*DAT_0097b514)(0);
  }
  else {
    FUN_00473da9(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


