/* FUN_10008f10 - 0x10008f10 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


void FUN_10008f10(void)

{
  code *pcVar1;
  undefined1 local_24 [16];
  uint uStack_14;
  
  (*DAT_10016d30)(local_24);
  pcVar1 = FUN_10008f60;
  if (uStack_14 < 2) {
    pcVar1 = FUN_10008f40;
  }
  PTR_FUN_10012544 = pcVar1;
  (*pcVar1)();
  return;
}


