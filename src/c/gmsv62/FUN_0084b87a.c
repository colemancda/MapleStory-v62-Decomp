/* FUN_0084b87a - 0x0084b87a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0084b87a(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  
  cVar1 = FUN_0042452b();
  if (cVar1 == '\0') {
    uVar2 = FUN_0042459a();
    uVar3 = FUN_0042459a();
    uVar4 = FUN_0042459a();
    uVar5 = FUN_0042459a();
    iVar6 = FUN_0042459a();
    *(int *)(param_1 + 0x3298) = iVar6 * 1000;
    if (DAT_0097bcf0 == 0) {
      FUN_0084ea8b();
      iVar6 = DAT_0097bcf0;
      FUN_006a2cb9(uVar2,uVar3,uVar4,uVar5,*(int *)(param_1 + 0x3298));
      uVar7 = -(uint)(iVar6 != 0) & iVar6 + 4U;
      FUN_008180db(uVar7);
      FUN_00817f6e(uVar7);
    }
  }
  else if (cVar1 == '\x01') {
    if (DAT_0097bcf0 != 0) {
      FUN_00815de9();
      if (DAT_0097bcf0 != 0) {
        (*(code *)**(undefined4 **)(DAT_0097bcf0 + 8))(1);
      }
    }
    *(undefined4 *)(param_1 + 0x3298) = 0;
  }
  return;
}


