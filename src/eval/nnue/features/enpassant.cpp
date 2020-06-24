// NNUE�]���֐��̓��͓�����K�̒�`

#if defined(EVAL_NNUE)

#include "enpassant.h"
#include "index_list.h"

namespace Eval {

  namespace NNUE {

    namespace Features {

      // �����ʂ̂����A�l��1�ł���C���f�b�N�X�̃��X�g���擾����
      void EnPassant::AppendActiveIndices(
        const Position& pos, Color perspective, IndexList* active) {
        // �R���p�C���̌x����������邽�߁A�z��T�C�Y���������ꍇ�͉������Ȃ�
        if (RawFeatures::kMaxActiveDimensions < kMaxActiveDimensions) return;

        auto epSquare = pos.state()->epSquare;
        if (epSquare == SQ_NONE) {
          return;
        }

        if (perspective == BLACK) {
          epSquare = Inv(epSquare);
        }

        auto file = file_of(epSquare);
        active->push_back(file);
      }

      // �����ʂ̂����A���O����l���ω������C���f�b�N�X�̃��X�g���擾����
      void EnPassant::AppendChangedIndices(
        const Position& pos, Color perspective,
        IndexList* removed, IndexList* added) {
        // Not implemented.
        assert(false);
      }

    }  // namespace Features

  }  // namespace NNUE

}  // namespace Eval

#endif  // defined(EVAL_NNUE)
