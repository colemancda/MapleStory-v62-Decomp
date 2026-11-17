/* FUN_008282ba - 0x008282ba in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined1 * FUN_008282ba(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (DAT_0097c2d0 == '\0') {
    iVar2 = (*DAT_0097b494)(&DAT_0097c2d0,0x104);
    FUN_008280d3(&DAT_0097c2d0);
    if ((iVar2 != 0) && ((&DAT_0097c2cf)[iVar2] != '\\')) {
      (&DAT_0097c2d0)[iVar2] = 0x5c;
      iVar2 = iVar2 + 1;
    }
    puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0x9ab);
    uVar1 = *puVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    (*DAT_0097b4b4)(&DAT_0097c2d0 + iVar2,uVar1);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return &DAT_0097c2d0;
}


