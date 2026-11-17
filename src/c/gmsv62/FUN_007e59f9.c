/* FUN_007e59f9 - 0x007e59f9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007e59f9(void)

{
  int *piVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  int unaff_EBP;
  
  FUN_00879bb8();
  piVar1 = *(int **)(unaff_EBP + 0xc);
  FUN_00414edd(&DAT_00978474,0xffffffff);
  pcVar2 = (char *)**(undefined4 **)(unaff_EBP + 8);
  if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
    pcVar3 = (char *)(*DAT_0097b584)(pcVar2);
    if (pcVar3 != pcVar2) {
      FUN_00879c20(unaff_EBP + -0x8c,pcVar2,(int)pcVar3 - (int)pcVar2);
      *(undefined1 *)(unaff_EBP + -0x8c + ((int)pcVar3 - (int)pcVar2)) = 0;
      FUN_00414edd(unaff_EBP + -0x8c,0xffffffff);
      if (*(int *)(unaff_EBP + 0x10) != 0) {
        if (*piVar1 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)(*piVar1 + -4);
        }
        uVar4 = FUN_0045e053(unaff_EBP + 0xc,uVar4,0xffffffff);
        *(undefined4 *)(unaff_EBP + -4) = 0;
        FUN_00414f8b(uVar4);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00414ebb();
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


