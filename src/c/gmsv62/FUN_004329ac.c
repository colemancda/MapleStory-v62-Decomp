/* FUN_004329ac - 0x004329ac in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Removing unreachable block (ram,0x004329d8) */
/* WARNING: Removing unreachable block (ram,0x00432a04) */

undefined4 __fastcall FUN_004329ac(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  for (uVar4 = 0; (iVar2 = *(int *)(param_1 + 8), iVar2 != 0 && (uVar4 < *(uint *)(iVar2 + -4)));
      uVar4 = uVar4 + 1) {
    if (*(int *)(uVar4 * 4 + iVar2) != 0) {
      iVar2 = FUN_00432a57();
      if (iVar2 != 0) {
        if (*(int *)(param_1 + 0xc) != 0) {
          iVar2 = *(int *)(param_1 + 8);
          if (*(int *)(iVar2 + uVar4 * 4) == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar1 = *(int **)(iVar2 + uVar4 * 4);
          uVar3 = FUN_0043210d();
          iVar2 = (**(code **)(*piVar1 + 0xd8))(piVar1,uVar3);
          if (iVar2 < 0) {
            FUN_00878e09(iVar2,piVar1,&DAT_00963df8);
          }
        }
        return 0;
      }
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
                 (uVar4 * 4 + *(int *)(param_1 + 8)),(IBinding *)0x0);
    }
  }
  return 1;
}


