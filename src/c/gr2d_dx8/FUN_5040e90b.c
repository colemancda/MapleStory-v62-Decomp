/* FUN_5040e90b - 0x5040e90b in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


int FUN_5040e90b(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  uint uVar5;
  int unaff_EBP;
  
  FUN_5042a430();
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    iVar4 = -0x7fffbffd;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    iVar4 = FUN_504103ae();
    if (-1 < iVar4) {
      iVar4 = *(int *)(unaff_EBP + 8);
      *(undefined4 **)(unaff_EBP + 8) = (undefined4 *)(iVar4 + 0x98);
      FUN_50401895();
      uVar5 = *(uint *)(iVar4 + 0xc4);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      while (uVar5 != 0) {
        puVar1 = *(undefined4 **)(uVar5 + 4);
        iVar2 = *(int *)((-(uint)(uVar5 != 0) & uVar5 - 0x10) + 4);
        this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
               FUN_50410370((void *)(*(int *)(unaff_EBP + -0x10) + 0x10));
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar1);
        uVar5 = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
      }
      *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x24) =
           *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x1c);
      piVar3 = *(int **)(unaff_EBP + -0x10);
      **(undefined4 **)(unaff_EBP + 0xc) = piVar3;
      (**(code **)(*piVar3 + 4))(piVar3);
      piVar3 = (int *)(iVar4 + 0x9c);
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        *(undefined4 *)(iVar4 + 0x98) = 0;
      }
      iVar4 = 0;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar4;
}


