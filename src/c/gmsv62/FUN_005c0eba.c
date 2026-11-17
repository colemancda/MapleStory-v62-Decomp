/* FUN_005c0eba - 0x005c0eba in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005c0eba(void)

{
  char cVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  cVar1 = FUN_0042452b();
  if (*(int *)(extraout_ECX + 0xd8 + cVar1 * 8) == 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0x21000003;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + 8) = 0x21000003;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + 8,&DAT_00903698);
  }
  FUN_005c1321((int)cVar1,*(undefined4 *)(unaff_EBP + 8));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


