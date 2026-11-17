/* ptr_00646e72 - 0x00646e72 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00646e72(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  LONG *lpAddend;
  int *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  int iStack_c;
  undefined4 *puStack_8;
  
LAB_00646e74:
  do {
    do {
      _puStack_8 = (double)CONCAT44(unaff_EBX,0x646e7d);
      FUN_00609b69();
      _puStack_8 = (double)CONCAT44(0x646e8a,puStack_8);
      uVar3 = FUN_0045e2eb();
      _puStack_8 = (double)CONCAT44(uVar3,unaff_EBP + -0x34);
      iStack_c = 0x646e96;
      puVar4 = (undefined4 *)FUN_0045a1d8();
      iStack_10 = *puVar4;
      _puStack_8 = 0.0;
      iStack_c = 0xffffffff;
      uStack_14 = 0;
      uStack_18 = 0;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      (*DAT_0097b4c8)();
      FUN_0087a1b0();
      *(undefined4 **)(unaff_EBP + -0x20) = &uStack_18;
      uVar3 = FUN_0045e2eb();
      puVar4 = (undefined4 *)FUN_0045a1d8(unaff_EBP + -0x30,uVar3);
      uVar3 = *puVar4;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      (*DAT_0097b4c8)(0,0,uVar3,0xffffffff,*(undefined4 *)(unaff_EBP + -0x20),0x3fffffff);
      _puStack_8 = (double)CONCAT44(*(undefined4 *)(unaff_EBP + -0x20),0x646ef5);
      FUN_00402e8e();
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        lpAddend = (LONG *)(*(int *)(unaff_EBP + -0x1c) + 8);
        _puStack_8 = (double)CONCAT44(lpAddend,0x646f09);
        InterlockedIncrement(lpAddend);
      }
      _puStack_8 = (double)CONCAT44(0x646f10,puStack_8);
      FUN_00402fa6();
      iVar2 = *(int *)(unaff_EBP + -0x1c);
      *(int *)(unaff_ESI + 0x10) = iVar2;
      if (iVar2 != 0) {
        _puStack_8 = (double)CONCAT44(0x646f1e,puStack_8);
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      _puStack_8 = (double)CONCAT44(0x646f2d,puStack_8);
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      _puStack_8 = (double)CONCAT44(0x646f39,puStack_8);
      FUN_00414ebb();
      _puStack_8 = 4.94065645841247e-324;
      iStack_c = 0x646f49;
      iStack_c = FUN_0045e2eb();
      iStack_10 = unaff_EBP + -0x38;
      uStack_14 = 0x646f55;
      puVar4 = (undefined4 *)FUN_005536ce();
      _puStack_8 = (double)CONCAT44((IBinding *)*puVar4,0x646f5f);
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_ESI + 0x14),
                 (IBinding *)*puVar4);
      piVar1 = *(int **)(unaff_EBP + -0x38);
      if (piVar1 != (int *)0x0) {
        _puStack_8 = (double)CONCAT44(piVar1,0x646f6c);
        (**(code **)(*piVar1 + 8))();
      }
      do {
        do {
          do {
            do {
              *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
              iVar2 = 0;
              if (**(int **)(unaff_EBP + -0x24) != 0) {
                iVar2 = *(int *)(**(int **)(unaff_EBP + -0x24) + -4);
              }
              if (iVar2 + -1 < *(int *)(unaff_EBP + -0x10)) {
                ExceptionList = *(void **)(unaff_EBP + -0xc);
                return;
              }
              iStack_c = unaff_EBP + -0x4c;
              _puStack_8 = (double)CONCAT44(*(undefined4 *)(unaff_EBP + -0x10),
                                            *(undefined4 *)(unaff_EBP + 8));
              iStack_10 = 0x646d0e;
              iVar2 = FUN_00458c4f();
              unaff_EBX = *(int **)(iVar2 + 4);
              _puStack_8 = (double)CONCAT44(0x646d19,puStack_8);
              FUN_0046575e();
            } while (unaff_EBX == (int *)0x0);
            _puStack_8 = (double)CONCAT44(0x646d31,puStack_8);
            uVar3 = FUN_0045e2eb();
            _puStack_8 = (double)CONCAT44(uVar3,0x646d39);
            iVar2 = FUN_0055443a();
          } while (iVar2 != 0);
          _puStack_8 = (double)CONCAT44(0x646d4e,puStack_8);
          uVar3 = FUN_0045e2eb();
          _puStack_8 = (double)CONCAT44(uVar3,0x646d56);
          iVar2 = FUN_00554386();
        } while (iVar2 != 0);
        _puStack_8 = (double)CONCAT44(0x646d6b,puStack_8);
        uVar3 = FUN_0045e2eb();
        _puStack_8 = (double)CONCAT44(uVar3,0x646d73);
        iVar2 = FUN_005540b6();
      } while ((iVar2 != 0) || (unaff_EBX[6] != 0 || unaff_EBX[7] != 0));
      _puStack_8 = -NAN;
      unaff_ESI = FUN_006496e3();
      _puStack_8 = (double)CONCAT44(0x646d9a,puStack_8);
      uVar3 = FUN_0045e2eb();
      _puStack_8 = (double)CONCAT44(uVar3,0x646da2);
      FUN_0045e3a0();
      *(undefined4 *)(unaff_ESI + 0xc) = *(undefined4 *)(unaff_EBP + -0x10);
      *(undefined4 *)(unaff_EBP + -0x20) = DAT_00973a94;
      _puStack_8 = (double)CONCAT44(unaff_EBP + -0x54,(undefined4 *)(unaff_ESI + 0x18));
      iStack_c = 0x646dbf;
      iStack_c = FUN_0045e2eb();
      iStack_10 = 0x646dc8;
      FUN_00553900();
      _puStack_8 = (double)CONCAT44(0x646dcf,puStack_8);
      uVar3 = (**(code **)(*unaff_EBX + 0x18))();
      *(undefined8 *)(unaff_ESI + 0x20) = 0;
      *(undefined4 *)(unaff_EBP + -0x20) = uVar3;
      iVar2 = *(int *)(unaff_EBP + -0x20);
      *(undefined4 *)(unaff_ESI + 0x2c) = uVar3;
      _puStack_8 = (double)iVar2 * *(double *)(unaff_EBP + -0x54);
      iStack_c = 0x646dea;
      FUN_0087c3de();
      _puStack_8 = (double)CONCAT44(0x646df3,puStack_8);
      uVar3 = __ftol();
      *(undefined4 *)(unaff_ESI + 0x18) = uVar3;
      _puStack_8 = (double)CONCAT44(0x646dfc,puStack_8);
      iVar2 = FUN_0045e2eb();
    } while ((iVar2 / 10000 != 0xcf) && (iVar2 / 10000 != 0xe9));
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    while( true ) {
      iVar2 = *(int *)(*(int *)(unaff_EBP + -0x28) + 200);
      if ((iVar2 == 0) || (*(uint *)(iVar2 + -4) <= *(uint *)(unaff_EBP + -0x14)))
      goto LAB_00646e74;
      *(int *)(unaff_EBP + -0x20) =
           *(int *)(unaff_EBP + -0x18) + *(int *)(*(int *)(unaff_EBP + -0x28) + 200);
      _puStack_8 = (double)CONCAT44(0x646e42,puStack_8);
      uVar3 = FUN_0045e2eb();
      *(undefined4 *)(unaff_EBP + -0x2c) = uVar3;
      _puStack_8 = (double)CONCAT44(0x646e4d,puStack_8);
      iVar2 = FUN_0045e2eb();
      if (iVar2 == *(int *)(unaff_EBP + -0x2c)) break;
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 0x40;
    }
    *(int *)(unaff_EBP + -0x2c) =
         *(int *)(*(int *)(unaff_EBP + -0x20) + 0x28) - *(int *)(unaff_ESI + 0x2c);
    *(double *)(unaff_ESI + 0x20) =
         (double)*(int *)(unaff_EBP + -0x2c) * *(double *)(*(int *)(unaff_EBP + -0x20) + 0x20);
  } while( true );
}


