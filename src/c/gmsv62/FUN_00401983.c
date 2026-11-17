/* FUN_00401983 - 0x00401983 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __thiscall FUN_00401983(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = *(uint *)(param_1 + 0x48);
  do {
    if (uVar5 == 0) {
      return 0;
    }
    if (*(int *)(uVar5 + 4) != param_2) {
      uVar3 = *(uint *)(*(int *)(uVar5 + 4) + 0xc);
      while (uVar7 = uVar3, uVar7 != 0) {
        iVar1 = *(int *)((-(uint)(uVar7 != 0) & uVar7 - 0x10) + 4);
        uVar6 = *(uint *)(param_2 + 0xc);
        while (uVar3 = -(uint)(iVar1 != 0) & iVar1 + 0x10U, uVar6 != 0) {
          iVar2 = *(int *)((-(uint)(uVar6 != 0) & uVar6 - 0x10) + 4);
          uVar6 = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
          cVar4 = FUN_00402f72(uVar7);
          if (cVar4 != '\0') {
            return uVar5;
          }
        }
      }
    }
    iVar1 = *(int *)((-(uint)(uVar5 != 0) & uVar5 - 0x10) + 4);
    uVar5 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
  } while( true );
}


