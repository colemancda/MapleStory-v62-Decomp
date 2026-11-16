/* FUN_5080bc11 - 0x5080bc11 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int FUN_5080bc11(void)

{
  byte bVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5080e090();
  bVar1 = *(byte *)(*(int *)(unaff_EBP + 8) + 8);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffff0;
  if ((bVar1 & 2) == 0) {
    iVar2 = -0x7ff8fffb;
  }
  else if ((*(int *)(unaff_EBP + 0x18) == 0) || (*(int *)(unaff_EBP + 0x14) != 0)) {
    iVar2 = *(int *)(extraout_ECX + -4);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar2 = (**(code **)(iVar2 + 4))
                      (*(int *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                       *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),
                       *(undefined4 *)(unaff_EBP + 0x18),*(undefined4 *)(unaff_EBP + 0x1c));
    if (-1 < iVar2) {
      *(int *)(extraout_ECX + -8) = extraout_ECX + -4;
    }
  }
  else {
    iVar2 = -0x7fffbffd;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar2;
}


