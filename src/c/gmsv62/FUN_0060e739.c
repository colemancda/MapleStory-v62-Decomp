/* FUN_0060e739 - 0x0060e739 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0060e739(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = *(int *)(unaff_EBP + 8);
  if ((0 < iVar2) && (iVar2 < 4)) {
    if (*(int *)(extraout_ECX + 0xc0) == 0) {
      (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x1f0 + iVar2 * 8) + 4) + 0x24))(1);
      iVar3 = (*DAT_0097b704)();
      piVar1 = (int *)(extraout_ECX + 0x1ac + iVar2 * 4);
      *piVar1 = iVar3;
      if (iVar3 == 0) {
        *piVar1 = 1;
      }
    }
    FUN_008161f1(0);
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0x21000003;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + 8) = 0x21000003;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 8,&DAT_00903698);
}


