/* FUN_004f0ff6 - 0x004f0ff6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004f0ff6(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar3 = FUN_0042459a();
  if (0 < iVar3) {
    *(int *)(unaff_EBP + -0x10) = iVar3;
    do {
      uVar4 = FUN_0042459a();
      cVar2 = FUN_0042452b();
      if (cVar2 == '\0') {
        FUN_0045cdbc(unaff_EBP + 8);
        *(undefined4 *)(unaff_EBP + -4) = 0;
        uVar5 = FUN_0042459a();
        uVar6 = FUN_0042459a();
        FUN_006dee99(uVar4,unaff_EBP + 8,uVar5,uVar6);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00414ebb();
      }
      else {
        FUN_006deedf(uVar4);
      }
      piVar1 = (int *)(unaff_EBP + -0x10);
      *piVar1 = *piVar1 + -1;
    } while (*piVar1 != 0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


