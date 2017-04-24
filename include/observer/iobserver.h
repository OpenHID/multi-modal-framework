/// @file iobserver.h
/// @sa iobservable.h
/// @sa http://xinhuang.github.io/multi-threading/2015/02/11/how-a-multi-threaded-implementation-of-the-observer-pattern-can-fail/

#ifndef IOBSERVER_H
#define IOBSERVER_H

namespace tamgef {
namespace observer {

/// @brief Observer Interface.
template<typename T>
class IObserver
{
public:
	virtual ~IObserver() = default;

	/// @brief Receive latest message.
	/// @returns @p true if Observer successfully recieves
	/// message, otherwise @p false.
	virtual bool update(T message) = 0;
};

} // namespace controller
} // namespace tamgef

#endif
