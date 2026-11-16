/* FUN_50401300 - 0x50401300 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


int FUN_50401300(void)

{
  uint *this;
  int unaff_EBP;
  undefined4 *puVar1;
  int iVar2;
  
  FUN_5042a430();
  iVar2 = -0x7ff8fff2;
  this = FUN_504015ff();
  *(uint **)(unaff_EBP + -0x10) = this;
  puVar1 = (undefined4 *)0x0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (this != (uint *)0x0) {
    puVar1 = FUN_504013dd(this,*(undefined4 *)(unaff_EBP + 8));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (**(code **)(puVar1[4] + 0x80))();
    if (iVar2 == 0) {
      iVar2 = (**(code **)*puVar1)
                        (puVar1,*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x10));
      if (iVar2 == 0) goto LAB_50401376;
    }
    FUN_5040141b();
    FUN_5040170b(&DAT_50438f50,puVar1);
  }
LAB_50401376:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar2;
}


