/* FUN_00613f35 - 0x00613f35 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00613f35(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  float10 fVar2;
  
  FUN_00879bb8();
  iVar1 = FUN_0061411c();
  if ((*(int **)(extraout_ECX + 0x84) != (int *)0x0) && (iVar1 != 0)) {
    iVar1 = (**(code **)(**(int **)(extraout_ECX + 0x84) + 8))();
    if (iVar1 != 0) {
      iVar1 = FUN_00617de1();
      if (iVar1 != 0) {
        (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x84) + 4) + 0xc))(unaff_EBP + -0x14);
        *(undefined4 *)(unaff_EBP + -4) = 0;
        fVar2 = (float10)FUN_005d0e60();
        FUN_005d0f1a((double)fVar2);
        fVar2 = (float10)FUN_005d0e60();
        FUN_005d0f1a((double)fVar2);
        fVar2 = (float10)FUN_005d0e60();
        FUN_005d0f1a((double)fVar2);
        fVar2 = (float10)FUN_005d0e60();
        FUN_005d0f1a((double)fVar2);
        fVar2 = (float10)FUN_005d0e60();
        FUN_005d0f1a((double)fVar2);
        fVar2 = (float10)FUN_005d0e60();
        FUN_005d0f1a((double)fVar2);
        fVar2 = (float10)FUN_005d0e60();
        FUN_005d0f1a((double)fVar2);
        fVar2 = (float10)FUN_005d0e60();
        FUN_005d0f1a((double)fVar2);
        fVar2 = (float10)FUN_005d0e60();
        FUN_005d0f1a((double)fVar2);
        fVar2 = (float10)FUN_005d0e60();
        FUN_005d0f1a((double)fVar2);
        fVar2 = (float10)FUN_005d0e60();
        FUN_005d0f1a((double)fVar2);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(unaff_EBP + -0x10) != 0) {
          FUN_004d2023();
        }
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


