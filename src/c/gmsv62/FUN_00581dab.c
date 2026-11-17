/* FUN_00581dab - 0x00581dab in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00581dab(int param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 **ppuVar4;
  undefined4 *puStack_10;
  
  if (((param_2 & 0x80000000) == 0) && (param_1 == 0xd)) {
    puStack_10 = (undefined4 *)0x581dc6;
    iVar2 = FUN_005828c5();
    if (iVar2 != 0) {
      puStack_10 = &param_2;
      puVar3 = (undefined4 *)FUN_0045b90e();
      if (((char *)*puVar3 == (char *)0x0) || (*(char *)*puVar3 == '\0')) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      puStack_10 = (undefined4 *)0x581df3;
      FUN_00414ebb();
      if (!bVar1) {
        puStack_10 = (undefined4 *)0x581e02;
        FUN_00414f29();
        ppuVar4 = &puStack_10;
        FUN_0048b998(&puStack_10);
        FUN_0045b90e(ppuVar4);
        FUN_00566b73();
      }
    }
  }
  return;
}


