/* FUN_008281ad - 0x008281ad in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_008281ad(void)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 *puVar3;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  FUN_00414edd(&DAT_00978474,0xffffffff);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iVar1 = (*DAT_0097b604)(1);
  if (iVar1 == 0) {
    puVar3 = *(undefined4 **)(unaff_EBP + 8);
    *puVar3 = 0;
    FUN_00414f8b(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -0x14) = 1;
  }
  else {
    iVar1 = (*DAT_0097b5fc)(*(undefined4 *)(extraout_ECX + 4));
    if (iVar1 != 0) {
      iVar1 = (*DAT_0097b600)(1);
      if (iVar1 != 0) {
        iVar2 = (*DAT_0097b404)(iVar1);
        if (iVar2 != 0) {
          FUN_00414edd(iVar2,0xffffffff);
          (*DAT_0097b408)(iVar1);
        }
      }
      (*DAT_0097b5f0)();
    }
    puVar3 = *(undefined4 **)(unaff_EBP + 8);
    *puVar3 = 0;
    FUN_00414f8b(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -0x14) = 1;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar3;
}


