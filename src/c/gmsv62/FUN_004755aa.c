/* FUN_004755aa - 0x004755aa in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004755aa(void)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  cVar1 = FUN_0042452b();
  if (cVar1 == '\0') {
    if (*(int *)(extraout_ECX + 0x90) == 0) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0x21000002;
      *(undefined4 *)(unaff_EBP + 8) = 0x21000002;
      *(undefined4 *)(unaff_EBP + -4) = 2;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(unaff_EBP + 8,&DAT_00903698);
    }
    (*DAT_0097b514)(0);
  }
  else {
    if ((DAT_009796d4 == 0) ||
       (iVar3 = (**(code **)(*(int *)(DAT_009796d4 + 4) + 0x48))(&DAT_0097929c),
       iVar4 = DAT_009796d4, iVar3 == 0)) {
      iVar4 = 0;
    }
    if (iVar4 == 0) {
      iVar4 = FUN_004029b9(0x18);
      *(int *)(unaff_EBP + -0x10) = iVar4;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (iVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_0052899a();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_0065ce47(uVar5,0);
    }
    uVar5 = FUN_0042459a();
    uVar2 = FUN_00424561();
    FUN_00473902(uVar2,0);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar5;
    FUN_0083050c(unaff_EBP + -0x20);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


