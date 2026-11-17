/* FUN_006c65ae - 0x006c65ae in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006c65ae(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_0078a282(*(undefined4 *)(unaff_EBP + 8));
  iVar1 = *(int *)(unaff_EBP + 8);
  if (iVar1 == 1) {
    FUN_0051c175();
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 == 2000) {
        iVar1 = FUN_004029b9(0x84);
        *(int *)(unaff_EBP + 8) = iVar1;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        if (iVar1 != 0) {
          FUN_006c9460(extraout_ECX,0);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar1 = FUN_004bc6a2();
        if (iVar1 != 1) goto LAB_006c66c4;
        FUN_0051c353();
      }
      else {
        if (iVar1 != 0x7d1) goto LAB_006c66c4;
        iVar1 = FUN_004029b9(0x84);
        *(int *)(unaff_EBP + 8) = iVar1;
        *(undefined4 *)(unaff_EBP + -4) = 1;
        if (iVar1 != 0) {
          FUN_006c9460(extraout_ECX,1);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar1 = FUN_004bc6a2();
        if (iVar1 != 1) goto LAB_006c66c4;
        _memset((void *)(DAT_00979110 + 4),0,0x1bd);
        FUN_006c941e();
      }
      FUN_008161f1(0);
      FUN_008161f1(0);
      goto LAB_006c66c4;
    }
    FUN_008161f1(0);
  }
  FUN_008324e4(5);
LAB_006c66c4:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


